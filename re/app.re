open BsReactNative;

let horse = "dog";

let app = () =>
  <View
    style=Style.(style([flex(1.), justifyContent(Center), alignItems(Center)]))>
    <Text value="Reason is Digging Doug" />
    <Board />
  </View>;