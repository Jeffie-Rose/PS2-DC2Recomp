#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainKey__Fv
// Address: 0x233ff0 - 0x23428c
void MenuMainKey__Fv_0x233ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainKey__Fv_0x233ff0");
#endif

    switch (ctx->pc) {
        case 0x233ff0u: goto label_233ff0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ff8u: goto label_233ff8;
        case 0x233ffcu: goto label_233ffc;
        case 0x234000u: goto label_234000;
        case 0x234004u: goto label_234004;
        case 0x234008u: goto label_234008;
        case 0x23400cu: goto label_23400c;
        case 0x234010u: goto label_234010;
        case 0x234014u: goto label_234014;
        case 0x234018u: goto label_234018;
        case 0x23401cu: goto label_23401c;
        case 0x234020u: goto label_234020;
        case 0x234024u: goto label_234024;
        case 0x234028u: goto label_234028;
        case 0x23402cu: goto label_23402c;
        case 0x234030u: goto label_234030;
        case 0x234034u: goto label_234034;
        case 0x234038u: goto label_234038;
        case 0x23403cu: goto label_23403c;
        case 0x234040u: goto label_234040;
        case 0x234044u: goto label_234044;
        case 0x234048u: goto label_234048;
        case 0x23404cu: goto label_23404c;
        case 0x234050u: goto label_234050;
        case 0x234054u: goto label_234054;
        case 0x234058u: goto label_234058;
        case 0x23405cu: goto label_23405c;
        case 0x234060u: goto label_234060;
        case 0x234064u: goto label_234064;
        case 0x234068u: goto label_234068;
        case 0x23406cu: goto label_23406c;
        case 0x234070u: goto label_234070;
        case 0x234074u: goto label_234074;
        case 0x234078u: goto label_234078;
        case 0x23407cu: goto label_23407c;
        case 0x234080u: goto label_234080;
        case 0x234084u: goto label_234084;
        case 0x234088u: goto label_234088;
        case 0x23408cu: goto label_23408c;
        case 0x234090u: goto label_234090;
        case 0x234094u: goto label_234094;
        case 0x234098u: goto label_234098;
        case 0x23409cu: goto label_23409c;
        case 0x2340a0u: goto label_2340a0;
        case 0x2340a4u: goto label_2340a4;
        case 0x2340a8u: goto label_2340a8;
        case 0x2340acu: goto label_2340ac;
        case 0x2340b0u: goto label_2340b0;
        case 0x2340b4u: goto label_2340b4;
        case 0x2340b8u: goto label_2340b8;
        case 0x2340bcu: goto label_2340bc;
        case 0x2340c0u: goto label_2340c0;
        case 0x2340c4u: goto label_2340c4;
        case 0x2340c8u: goto label_2340c8;
        case 0x2340ccu: goto label_2340cc;
        case 0x2340d0u: goto label_2340d0;
        case 0x2340d4u: goto label_2340d4;
        case 0x2340d8u: goto label_2340d8;
        case 0x2340dcu: goto label_2340dc;
        case 0x2340e0u: goto label_2340e0;
        case 0x2340e4u: goto label_2340e4;
        case 0x2340e8u: goto label_2340e8;
        case 0x2340ecu: goto label_2340ec;
        case 0x2340f0u: goto label_2340f0;
        case 0x2340f4u: goto label_2340f4;
        case 0x2340f8u: goto label_2340f8;
        case 0x2340fcu: goto label_2340fc;
        case 0x234100u: goto label_234100;
        case 0x234104u: goto label_234104;
        case 0x234108u: goto label_234108;
        case 0x23410cu: goto label_23410c;
        case 0x234110u: goto label_234110;
        case 0x234114u: goto label_234114;
        case 0x234118u: goto label_234118;
        case 0x23411cu: goto label_23411c;
        case 0x234120u: goto label_234120;
        case 0x234124u: goto label_234124;
        case 0x234128u: goto label_234128;
        case 0x23412cu: goto label_23412c;
        case 0x234130u: goto label_234130;
        case 0x234134u: goto label_234134;
        case 0x234138u: goto label_234138;
        case 0x23413cu: goto label_23413c;
        case 0x234140u: goto label_234140;
        case 0x234144u: goto label_234144;
        case 0x234148u: goto label_234148;
        case 0x23414cu: goto label_23414c;
        case 0x234150u: goto label_234150;
        case 0x234154u: goto label_234154;
        case 0x234158u: goto label_234158;
        case 0x23415cu: goto label_23415c;
        case 0x234160u: goto label_234160;
        case 0x234164u: goto label_234164;
        case 0x234168u: goto label_234168;
        case 0x23416cu: goto label_23416c;
        case 0x234170u: goto label_234170;
        case 0x234174u: goto label_234174;
        case 0x234178u: goto label_234178;
        case 0x23417cu: goto label_23417c;
        case 0x234180u: goto label_234180;
        case 0x234184u: goto label_234184;
        case 0x234188u: goto label_234188;
        case 0x23418cu: goto label_23418c;
        case 0x234190u: goto label_234190;
        case 0x234194u: goto label_234194;
        case 0x234198u: goto label_234198;
        case 0x23419cu: goto label_23419c;
        case 0x2341a0u: goto label_2341a0;
        case 0x2341a4u: goto label_2341a4;
        case 0x2341a8u: goto label_2341a8;
        case 0x2341acu: goto label_2341ac;
        case 0x2341b0u: goto label_2341b0;
        case 0x2341b4u: goto label_2341b4;
        case 0x2341b8u: goto label_2341b8;
        case 0x2341bcu: goto label_2341bc;
        case 0x2341c0u: goto label_2341c0;
        case 0x2341c4u: goto label_2341c4;
        case 0x2341c8u: goto label_2341c8;
        case 0x2341ccu: goto label_2341cc;
        case 0x2341d0u: goto label_2341d0;
        case 0x2341d4u: goto label_2341d4;
        case 0x2341d8u: goto label_2341d8;
        case 0x2341dcu: goto label_2341dc;
        case 0x2341e0u: goto label_2341e0;
        case 0x2341e4u: goto label_2341e4;
        case 0x2341e8u: goto label_2341e8;
        case 0x2341ecu: goto label_2341ec;
        case 0x2341f0u: goto label_2341f0;
        case 0x2341f4u: goto label_2341f4;
        case 0x2341f8u: goto label_2341f8;
        case 0x2341fcu: goto label_2341fc;
        case 0x234200u: goto label_234200;
        case 0x234204u: goto label_234204;
        case 0x234208u: goto label_234208;
        case 0x23420cu: goto label_23420c;
        case 0x234210u: goto label_234210;
        case 0x234214u: goto label_234214;
        case 0x234218u: goto label_234218;
        case 0x23421cu: goto label_23421c;
        case 0x234220u: goto label_234220;
        case 0x234224u: goto label_234224;
        case 0x234228u: goto label_234228;
        case 0x23422cu: goto label_23422c;
        case 0x234230u: goto label_234230;
        case 0x234234u: goto label_234234;
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        default: break;
    }

    ctx->pc = 0x233ff0u;

label_233ff0:
    // 0x233ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233ff4:
    // 0x233ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x233ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_233ff8:
    // 0x233ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_233ffc:
    // 0x233ffc: 0xc08d164  jal         func_234590
label_234000:
    if (ctx->pc == 0x234000u) {
        ctx->pc = 0x234000u;
            // 0x234000: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x234004u;
        goto label_234004;
    }
    ctx->pc = 0x233FFCu;
    SET_GPR_U32(ctx, 31, 0x234004u);
    ctx->pc = 0x234000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233FFCu;
            // 0x234000: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234590u;
    if (runtime->hasFunction(0x234590u)) {
        auto targetFn = runtime->lookupFunction(0x234590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234004u; }
        if (ctx->pc != 0x234004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWorldTrans__Fv_0x234590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234004u; }
        if (ctx->pc != 0x234004u) { return; }
    }
    ctx->pc = 0x234004u;
label_234004:
    // 0x234004: 0xc08d194  jal         func_234650
label_234008:
    if (ctx->pc == 0x234008u) {
        ctx->pc = 0x23400Cu;
        goto label_23400c;
    }
    ctx->pc = 0x234004u;
    SET_GPR_U32(ctx, 31, 0x23400Cu);
    ctx->pc = 0x234650u;
    if (runtime->hasFunction(0x234650u)) {
        auto targetFn = runtime->lookupFunction(0x234650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23400Cu; }
        if (ctx->pc != 0x23400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPolygonSetEnv__Fv_0x234650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23400Cu; }
        if (ctx->pc != 0x23400Cu) { return; }
    }
    ctx->pc = 0x23400Cu;
label_23400c:
    // 0x23400c: 0xc052334  jal         func_148CD0
label_234010:
    if (ctx->pc == 0x234010u) {
        ctx->pc = 0x234014u;
        goto label_234014;
    }
    ctx->pc = 0x23400Cu;
    SET_GPR_U32(ctx, 31, 0x234014u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234014u; }
        if (ctx->pc != 0x234014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234014u; }
        if (ctx->pc != 0x234014u) { return; }
    }
    ctx->pc = 0x234014u;
label_234014:
    // 0x234014: 0xc08f804  jal         func_23E010
label_234018:
    if (ctx->pc == 0x234018u) {
        ctx->pc = 0x234018u;
            // 0x234018: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x23401Cu;
        goto label_23401c;
    }
    ctx->pc = 0x234014u;
    SET_GPR_U32(ctx, 31, 0x23401Cu);
    ctx->pc = 0x234018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234014u;
            // 0x234018: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E010u;
    if (runtime->hasFunction(0x23E010u)) {
        auto targetFn = runtime->lookupFunction(0x23E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23401Cu; }
        if (ctx->pc != 0x23401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelDataInit__12CMenuKeyFuncFv_0x23e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23401Cu; }
        if (ctx->pc != 0x23401Cu) { return; }
    }
    ctx->pc = 0x23401Cu;
label_23401c:
    // 0x23401c: 0xc08903c  jal         func_2240F0
label_234020:
    if (ctx->pc == 0x234020u) {
        ctx->pc = 0x234024u;
        goto label_234024;
    }
    ctx->pc = 0x23401Cu;
    SET_GPR_U32(ctx, 31, 0x234024u);
    ctx->pc = 0x2240F0u;
    if (runtime->hasFunction(0x2240F0u)) {
        auto targetFn = runtime->lookupFunction(0x2240F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234024u; }
        if (ctx->pc != 0x234024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameStep__Fv_0x2240f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234024u; }
        if (ctx->pc != 0x234024u) { return; }
    }
    ctx->pc = 0x234024u;
label_234024:
    // 0x234024: 0xc08d234  jal         func_2348D0
label_234028:
    if (ctx->pc == 0x234028u) {
        ctx->pc = 0x23402Cu;
        goto label_23402c;
    }
    ctx->pc = 0x234024u;
    SET_GPR_U32(ctx, 31, 0x23402Cu);
    ctx->pc = 0x2348D0u;
    if (runtime->hasFunction(0x2348D0u)) {
        auto targetFn = runtime->lookupFunction(0x2348D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23402Cu; }
        if (ctx->pc != 0x23402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAreaBoardNameStep__Fv_0x2348d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23402Cu; }
        if (ctx->pc != 0x23402Cu) { return; }
    }
    ctx->pc = 0x23402Cu;
label_23402c:
    // 0x23402c: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_234030:
    // 0x234030: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_234034:
    if (ctx->pc == 0x234034u) {
        ctx->pc = 0x234034u;
            // 0x234034: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x234038u;
        goto label_234038;
    }
    ctx->pc = 0x234030u;
    {
        const bool branch_taken_0x234030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234030u;
            // 0x234034: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234030) {
            ctx->pc = 0x234058u;
            goto label_234058;
        }
    }
    ctx->pc = 0x234038u;
label_234038:
    // 0x234038: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x234038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23403c:
    // 0x23403c: 0xc052d0c  jal         func_14B430
label_234040:
    if (ctx->pc == 0x234040u) {
        ctx->pc = 0x234040u;
            // 0x234040: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x234044u;
        goto label_234044;
    }
    ctx->pc = 0x23403Cu;
    SET_GPR_U32(ctx, 31, 0x234044u);
    ctx->pc = 0x234040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23403Cu;
            // 0x234040: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234044u; }
        if (ctx->pc != 0x234044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234044u; }
        if (ctx->pc != 0x234044u) { return; }
    }
    ctx->pc = 0x234044u;
label_234044:
    // 0x234044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_234048:
    if (ctx->pc == 0x234048u) {
        ctx->pc = 0x23404Cu;
        goto label_23404c;
    }
    ctx->pc = 0x234044u;
    {
        const bool branch_taken_0x234044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234044) {
            ctx->pc = 0x234058u;
            goto label_234058;
        }
    }
    ctx->pc = 0x23404Cu;
label_23404c:
    // 0x23404c: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_234050:
    // 0x234050: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x234050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_234054:
    // 0x234054: 0xaf829520  sw          $v0, -0x6AE0($gp)
    ctx->pc = 0x234054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939936), GPR_U32(ctx, 2));
label_234058:
    // 0x234058: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23405c:
    // 0x23405c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_234060:
    // 0x234060: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
label_234064:
    // 0x234064: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x234064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_234068:
    // 0x234068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23406c:
    // 0x23406c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234070:
    // 0x234070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234074:
    // 0x234074: 0x40f809  jalr        $v0
label_234078:
    if (ctx->pc == 0x234078u) {
        ctx->pc = 0x23407Cu;
        goto label_23407c;
    }
    ctx->pc = 0x234074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23407Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23407Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23407Cu; }
            if (ctx->pc != 0x23407Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23407Cu;
label_23407c:
    // 0x23407c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234080:
    // 0x234080: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234084:
    // 0x234084: 0x12020051  beq         $s0, $v0, . + 4 + (0x51 << 2)
label_234088:
    if (ctx->pc == 0x234088u) {
        ctx->pc = 0x234088u;
            // 0x234088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23408Cu;
        goto label_23408c;
    }
    ctx->pc = 0x234084u;
    {
        const bool branch_taken_0x234084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x234088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234084u;
            // 0x234088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234084) {
            ctx->pc = 0x2341CCu;
            goto label_2341cc;
        }
    }
    ctx->pc = 0x23408Cu;
label_23408c:
    // 0x23408c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_234090:
    if (ctx->pc == 0x234090u) {
        ctx->pc = 0x234094u;
        goto label_234094;
    }
    ctx->pc = 0x23408Cu;
    {
        const bool branch_taken_0x23408c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23408c) {
            ctx->pc = 0x23409Cu;
            goto label_23409c;
        }
    }
    ctx->pc = 0x234094u;
label_234094:
    // 0x234094: 0x10000057  b           . + 4 + (0x57 << 2)
label_234098:
    if (ctx->pc == 0x234098u) {
        ctx->pc = 0x234098u;
            // 0x234098: 0x8f82951c  lw          $v0, -0x6AE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939932)));
        ctx->pc = 0x23409Cu;
        goto label_23409c;
    }
    ctx->pc = 0x234094u;
    {
        const bool branch_taken_0x234094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234094u;
            // 0x234098: 0x8f82951c  lw          $v0, -0x6AE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939932)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234094) {
            ctx->pc = 0x2341F4u;
            goto label_2341f4;
        }
    }
    ctx->pc = 0x23409Cu;
label_23409c:
    // 0x23409c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2340a0:
    // 0x2340a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2340a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2340a4:
    // 0x2340a4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2340a8:
    if (ctx->pc == 0x2340A8u) {
        ctx->pc = 0x2340ACu;
        goto label_2340ac;
    }
    ctx->pc = 0x2340A4u;
    {
        const bool branch_taken_0x2340a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2340a4) {
            ctx->pc = 0x2340BCu;
            goto label_2340bc;
        }
    }
    ctx->pc = 0x2340ACu;
label_2340ac:
    // 0x2340ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2340b0:
    if (ctx->pc == 0x2340B0u) {
        ctx->pc = 0x2340B4u;
        goto label_2340b4;
    }
    ctx->pc = 0x2340ACu;
    {
        const bool branch_taken_0x2340ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340ac) {
            ctx->pc = 0x2340BCu;
            goto label_2340bc;
        }
    }
    ctx->pc = 0x2340B4u;
label_2340b4:
    // 0x2340b4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2340b8:
    if (ctx->pc == 0x2340B8u) {
        ctx->pc = 0x2340BCu;
        goto label_2340bc;
    }
    ctx->pc = 0x2340B4u;
    {
        const bool branch_taken_0x2340b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340b4) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2340BCu;
label_2340bc:
    // 0x2340bc: 0x8c710054  lw          $s1, 0x54($v1)
    ctx->pc = 0x2340bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2340c0:
    // 0x2340c0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2340c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2340c4:
    // 0x2340c4: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_2340c8:
    if (ctx->pc == 0x2340C8u) {
        ctx->pc = 0x2340C8u;
            // 0x2340c8: 0x24660054  addiu       $a2, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->pc = 0x2340CCu;
        goto label_2340cc;
    }
    ctx->pc = 0x2340C4u;
    {
        const bool branch_taken_0x2340c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2340C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340C4u;
            // 0x2340c8: 0x24660054  addiu       $a2, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340c4) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2340CCu;
label_2340cc:
    // 0x2340cc: 0x2a21000c  slti        $at, $s1, 0xC
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_2340d0:
    // 0x2340d0: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_2340d4:
    if (ctx->pc == 0x2340D4u) {
        ctx->pc = 0x2340D4u;
            // 0x2340d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x2340D8u;
        goto label_2340d8;
    }
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340D0u;
            // 0x2340d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2340D8u;
label_2340d8:
    // 0x2340d8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2340d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2340dc:
    // 0x2340dc: 0xdf848310  ld          $a0, -0x7CF0($gp)
    ctx->pc = 0x2340dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294935312)));
label_2340e0:
    // 0x2340e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2340e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2340e4:
    // 0x2340e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2340e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2340e8:
    // 0x2340e8: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x2340e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
label_2340ec:
    // 0x2340ec: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2340ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2340f0:
    // 0x2340f0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2340f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2340f4:
    // 0x2340f4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2340f8:
    // 0x2340f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2340f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2340fc:
    // 0x2340fc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2340fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234100:
    // 0x234100: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_234104:
    // 0x234104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_234108:
    if (ctx->pc == 0x234108u) {
        ctx->pc = 0x23410Cu;
        goto label_23410c;
    }
    ctx->pc = 0x234104u;
    {
        const bool branch_taken_0x234104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234104) {
            ctx->pc = 0x234110u;
            goto label_234110;
        }
    }
    ctx->pc = 0x23410Cu;
label_23410c:
    // 0x23410c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23410cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_234110:
    // 0x234110: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234114:
    // 0x234114: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x234114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_234118:
    // 0x234118: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_23411c:
    if (ctx->pc == 0x23411Cu) {
        ctx->pc = 0x23411Cu;
            // 0x23411c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x234120u;
        goto label_234120;
    }
    ctx->pc = 0x234118u;
    {
        const bool branch_taken_0x234118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234118u;
            // 0x23411c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234118) {
            ctx->pc = 0x234128u;
            goto label_234128;
        }
    }
    ctx->pc = 0x234120u;
label_234120:
    // 0x234120: 0xc0896d8  jal         func_225B60
label_234124:
    if (ctx->pc == 0x234124u) {
        ctx->pc = 0x234124u;
            // 0x234124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234128u;
        goto label_234128;
    }
    ctx->pc = 0x234120u;
    SET_GPR_U32(ctx, 31, 0x234128u);
    ctx->pc = 0x234124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234120u;
            // 0x234124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234128u; }
        if (ctx->pc != 0x234128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234128u; }
        if (ctx->pc != 0x234128u) { return; }
    }
    ctx->pc = 0x234128u;
label_234128:
    // 0x234128: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_23412c:
    // 0x23412c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_234130:
    if (ctx->pc == 0x234130u) {
        ctx->pc = 0x234130u;
            // 0x234130: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x234134u;
        goto label_234134;
    }
    ctx->pc = 0x23412Cu;
    {
        const bool branch_taken_0x23412c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23412Cu;
            // 0x234130: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23412c) {
            ctx->pc = 0x23413Cu;
            goto label_23413c;
        }
    }
    ctx->pc = 0x234134u;
label_234134:
    // 0x234134: 0xc0896d8  jal         func_225B60
label_234138:
    if (ctx->pc == 0x234138u) {
        ctx->pc = 0x234138u;
            // 0x234138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23413Cu;
        goto label_23413c;
    }
    ctx->pc = 0x234134u;
    SET_GPR_U32(ctx, 31, 0x23413Cu);
    ctx->pc = 0x234138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234134u;
            // 0x234138: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23413Cu; }
        if (ctx->pc != 0x23413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23413Cu; }
        if (ctx->pc != 0x23413Cu) { return; }
    }
    ctx->pc = 0x23413Cu;
label_23413c:
    // 0x23413c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x23413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234140:
    // 0x234140: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_234144:
    // 0x234144: 0xc08f078  jal         func_23C1E0
label_234148:
    if (ctx->pc == 0x234148u) {
        ctx->pc = 0x234148u;
            // 0x234148: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x23414Cu;
        goto label_23414c;
    }
    ctx->pc = 0x234144u;
    SET_GPR_U32(ctx, 31, 0x23414Cu);
    ctx->pc = 0x234148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234144u;
            // 0x234148: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C1E0u;
    if (runtime->hasFunction(0x23C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23414Cu; }
        if (ctx->pc != 0x23414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23414Cu; }
        if (ctx->pc != 0x23414Cu) { return; }
    }
    ctx->pc = 0x23414Cu;
label_23414c:
    // 0x23414c: 0x8f8294cc  lw          $v0, -0x6B34($gp)
    ctx->pc = 0x23414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_234150:
    // 0x234150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234154:
    // 0x234154: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x234154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_234158:
    // 0x234158: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x234158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
label_23415c:
    // 0x23415c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x23415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_234160:
    // 0x234160: 0xc08abcc  jal         func_22AF30
label_234164:
    if (ctx->pc == 0x234164u) {
        ctx->pc = 0x234164u;
            // 0x234164: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x234168u;
        goto label_234168;
    }
    ctx->pc = 0x234160u;
    SET_GPR_U32(ctx, 31, 0x234168u);
    ctx->pc = 0x234164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234160u;
            // 0x234164: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AF30u;
    if (runtime->hasFunction(0x22AF30u)) {
        auto targetFn = runtime->lookupFunction(0x22AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234168u; }
        if (ctx->pc != 0x234168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormInfoClear__14CPosDataManageFii_0x22af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234168u; }
        if (ctx->pc != 0x234168u) { return; }
    }
    ctx->pc = 0x234168u;
label_234168:
    // 0x234168: 0xc08ac10  jal         func_22B040
label_23416c:
    if (ctx->pc == 0x23416Cu) {
        ctx->pc = 0x23416Cu;
            // 0x23416c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x234170u;
        goto label_234170;
    }
    ctx->pc = 0x234168u;
    SET_GPR_U32(ctx, 31, 0x234170u);
    ctx->pc = 0x23416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234168u;
            // 0x23416c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234170u; }
        if (ctx->pc != 0x234170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234170u; }
        if (ctx->pc != 0x234170u) { return; }
    }
    ctx->pc = 0x234170u;
label_234170:
    // 0x234170: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x234170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_234174:
    // 0x234174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234178:
    // 0x234178: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x234178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_23417c:
    // 0x23417c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23417cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234180:
    // 0x234180: 0xa4600010  sh          $zero, 0x10($v1)
    ctx->pc = 0x234180u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
label_234184:
    // 0x234184: 0x8f8394cc  lw          $v1, -0x6B34($gp)
    ctx->pc = 0x234184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_234188:
    // 0x234188: 0xa0640015  sb          $a0, 0x15($v1)
    ctx->pc = 0x234188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 4));
label_23418c:
    // 0x23418c: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x23418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_234190:
    // 0x234190: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_234194:
    // 0x234194: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x234194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_234198:
    // 0x234198: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_23419c:
    if (ctx->pc == 0x23419Cu) {
        ctx->pc = 0x23419Cu;
            // 0x23419c: 0xac640070  sw          $a0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
        ctx->pc = 0x2341A0u;
        goto label_2341a0;
    }
    ctx->pc = 0x234198u;
    {
        const bool branch_taken_0x234198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234198u;
            // 0x23419c: 0xac640070  sw          $a0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234198) {
            ctx->pc = 0x2341ACu;
            goto label_2341ac;
        }
    }
    ctx->pc = 0x2341A0u;
label_2341a0:
    // 0x2341a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2341a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2341a4:
    // 0x2341a4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_2341a8:
    if (ctx->pc == 0x2341A8u) {
        ctx->pc = 0x2341ACu;
        goto label_2341ac;
    }
    ctx->pc = 0x2341A4u;
    {
        const bool branch_taken_0x2341a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2341a4) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x2341ACu;
label_2341ac:
    // 0x2341ac: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2341acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2341b0:
    // 0x2341b0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2341b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2341b4:
    // 0x2341b4: 0xc05f5fc  jal         func_17D7F0
label_2341b8:
    if (ctx->pc == 0x2341B8u) {
        ctx->pc = 0x2341B8u;
            // 0x2341b8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2341BCu;
        goto label_2341bc;
    }
    ctx->pc = 0x2341B4u;
    SET_GPR_U32(ctx, 31, 0x2341BCu);
    ctx->pc = 0x2341B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2341B4u;
            // 0x2341b8: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341BCu; }
        if (ctx->pc != 0x2341BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341BCu; }
        if (ctx->pc != 0x2341BCu) { return; }
    }
    ctx->pc = 0x2341BCu;
label_2341bc:
    // 0x2341bc: 0xc08d220  jal         func_234880
label_2341c0:
    if (ctx->pc == 0x2341C0u) {
        ctx->pc = 0x2341C0u;
            // 0x2341c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2341C4u;
        goto label_2341c4;
    }
    ctx->pc = 0x2341BCu;
    SET_GPR_U32(ctx, 31, 0x2341C4u);
    ctx->pc = 0x2341C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2341BCu;
            // 0x2341c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341C4u; }
        if (ctx->pc != 0x2341C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341C4u; }
        if (ctx->pc != 0x2341C4u) { return; }
    }
    ctx->pc = 0x2341C4u;
label_2341c4:
    // 0x2341c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2341c8:
    if (ctx->pc == 0x2341C8u) {
        ctx->pc = 0x2341C8u;
            // 0x2341c8: 0xa7809524  sh          $zero, -0x6ADC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939940), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2341CCu;
        goto label_2341cc;
    }
    ctx->pc = 0x2341C4u;
    {
        const bool branch_taken_0x2341c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341C4u;
            // 0x2341c8: 0xa7809524  sh          $zero, -0x6ADC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939940), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341c4) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2341CCu;
label_2341cc:
    // 0x2341cc: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2341d0:
    // 0x2341d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2341d4:
    // 0x2341d4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2341d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2341d8:
    // 0x2341d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2341dc:
    if (ctx->pc == 0x2341DCu) {
        ctx->pc = 0x2341E0u;
        goto label_2341e0;
    }
    ctx->pc = 0x2341D8u;
    {
        const bool branch_taken_0x2341d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2341d8) {
            ctx->pc = 0x2341F0u;
            goto label_2341f0;
        }
    }
    ctx->pc = 0x2341E0u;
label_2341e0:
    // 0x2341e0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2341e4:
    // 0x2341e4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2341e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2341e8:
    // 0x2341e8: 0xc05f5fc  jal         func_17D7F0
label_2341ec:
    if (ctx->pc == 0x2341ECu) {
        ctx->pc = 0x2341ECu;
            // 0x2341ec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x2341F0u;
        goto label_2341f0;
    }
    ctx->pc = 0x2341E8u;
    SET_GPR_U32(ctx, 31, 0x2341F0u);
    ctx->pc = 0x2341ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2341E8u;
            // 0x2341ec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341F0u; }
        if (ctx->pc != 0x2341F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341F0u; }
        if (ctx->pc != 0x2341F0u) { return; }
    }
    ctx->pc = 0x2341F0u;
label_2341f0:
    // 0x2341f0: 0x8f82951c  lw          $v0, -0x6AE4($gp)
    ctx->pc = 0x2341f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939932)));
label_2341f4:
    // 0x2341f4: 0x3c010098  lui         $at, 0x98
    ctx->pc = 0x2341f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)152 << 16));
label_2341f8:
    // 0x2341f8: 0x34219681  ori         $at, $at, 0x9681
    ctx->pc = 0x2341f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38529);
label_2341fc:
    // 0x2341fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2341fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_234200:
    // 0x234200: 0xaf82951c  sw          $v0, -0x6AE4($gp)
    ctx->pc = 0x234200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939932), GPR_U32(ctx, 2));
label_234204:
    // 0x234204: 0x8f82951c  lw          $v0, -0x6AE4($gp)
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939932)));
label_234208:
    // 0x234208: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x234208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23420c:
    // 0x23420c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_234210:
    if (ctx->pc == 0x234210u) {
        ctx->pc = 0x234214u;
        goto label_234214;
    }
    ctx->pc = 0x23420Cu;
    {
        const bool branch_taken_0x23420c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23420c) {
            ctx->pc = 0x234218u;
            goto label_234218;
        }
    }
    ctx->pc = 0x234214u;
label_234214:
    // 0x234214: 0xaf80951c  sw          $zero, -0x6AE4($gp)
    ctx->pc = 0x234214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939932), GPR_U32(ctx, 0));
label_234218:
    // 0x234218: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x234218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23421c:
    // 0x23421c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x23421cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_234220:
    // 0x234220: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x234220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_234224:
    // 0x234224: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x234224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_234228:
    // 0x234228: 0xc08fbd8  jal         func_23EF60
label_23422c:
    if (ctx->pc == 0x23422Cu) {
        ctx->pc = 0x23422Cu;
            // 0x23422c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x234230u;
        goto label_234230;
    }
    ctx->pc = 0x234228u;
    SET_GPR_U32(ctx, 31, 0x234230u);
    ctx->pc = 0x23422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234228u;
            // 0x23422c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF60u;
    if (runtime->hasFunction(0x23EF60u)) {
        auto targetFn = runtime->lookupFunction(0x23EF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234230u; }
        if (ctx->pc != 0x234230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuBGM__12CMenuKeyFuncFv_0x23ef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234230u; }
        if (ctx->pc != 0x234230u) { return; }
    }
    ctx->pc = 0x234230u;
label_234230:
    // 0x234230: 0xc08acec  jal         func_22B3B0
label_234234:
    if (ctx->pc == 0x234234u) {
        ctx->pc = 0x234238u;
        goto label_234238;
    }
    ctx->pc = 0x234230u;
    SET_GPR_U32(ctx, 31, 0x234238u);
    ctx->pc = 0x22B3B0u;
    if (runtime->hasFunction(0x22B3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234238u; }
        if (ctx->pc != 0x234238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDrawParamStep__Fv_0x22b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234238u; }
        if (ctx->pc != 0x234238u) { return; }
    }
    ctx->pc = 0x234238u;
label_234238:
    // 0x234238: 0x83829548  lb          $v0, -0x6AB8($gp)
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939976)));
label_23423c:
    // 0x23423c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_234240:
    if (ctx->pc == 0x234240u) {
        ctx->pc = 0x234240u;
            // 0x234240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234244u;
        goto label_234244;
    }
    ctx->pc = 0x23423Cu;
    {
        const bool branch_taken_0x23423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23423Cu;
            // 0x234240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23423c) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x234244u;
label_234244:
    // 0x234244: 0xa3809544  sb          $zero, -0x6ABC($gp)
    ctx->pc = 0x234244u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939972), (uint8_t)GPR_U32(ctx, 0));
label_234248:
    // 0x234248: 0xa3829548  sb          $v0, -0x6AB8($gp)
    ctx->pc = 0x234248u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939976), (uint8_t)GPR_U32(ctx, 2));
label_23424c:
    // 0x23424c: 0x83829544  lb          $v0, -0x6ABC($gp)
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939972)));
label_234250:
    // 0x234250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_234254:
    // 0x234254: 0xa3829544  sb          $v0, -0x6ABC($gp)
    ctx->pc = 0x234254u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939972), (uint8_t)GPR_U32(ctx, 2));
label_234258:
    // 0x234258: 0x83829544  lb          $v0, -0x6ABC($gp)
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939972)));
label_23425c:
    // 0x23425c: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x23425cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_234260:
    // 0x234260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_234264:
    if (ctx->pc == 0x234264u) {
        ctx->pc = 0x234268u;
        goto label_234268;
    }
    ctx->pc = 0x234260u;
    {
        const bool branch_taken_0x234260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234260) {
            ctx->pc = 0x234270u;
            goto label_234270;
        }
    }
    ctx->pc = 0x234268u;
label_234268:
    // 0x234268: 0xc068614  jal         func_1A1850
label_23426c:
    if (ctx->pc == 0x23426Cu) {
        ctx->pc = 0x23426Cu;
            // 0x23426c: 0xa3809544  sb          $zero, -0x6ABC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939972), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x234270u;
        goto label_234270;
    }
    ctx->pc = 0x234268u;
    SET_GPR_U32(ctx, 31, 0x234270u);
    ctx->pc = 0x23426Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234268u;
            // 0x23426c: 0xa3809544  sb          $zero, -0x6ABC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939972), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1850u;
    if (runtime->hasFunction(0x1A1850u)) {
        auto targetFn = runtime->lookupFunction(0x1A1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234270u; }
        if (ctx->pc != 0x234270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UserDataRefresh__Fv_0x1a1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234270u; }
        if (ctx->pc != 0x234270u) { return; }
    }
    ctx->pc = 0x234270u;
label_234270:
    // 0x234270: 0xa3809540  sb          $zero, -0x6AC0($gp)
    ctx->pc = 0x234270u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939968), (uint8_t)GPR_U32(ctx, 0));
label_234274:
    // 0x234274: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234278:
    // 0x234278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23427c:
    // 0x23427c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23427cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_234280:
    // 0x234280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_234284:
    // 0x234284: 0x3e00008  jr          $ra
label_234288:
    if (ctx->pc == 0x234288u) {
        ctx->pc = 0x234288u;
            // 0x234288: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x23428Cu;
        goto label_fallthrough_0x234284;
    }
    ctx->pc = 0x234284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234284u;
            // 0x234288: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x234284:
    ctx->pc = 0x23428Cu;
}
