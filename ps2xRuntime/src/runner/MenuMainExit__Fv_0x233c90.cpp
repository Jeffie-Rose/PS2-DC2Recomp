#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainExit__Fv
// Address: 0x233c90 - 0x233fb8
void MenuMainExit__Fv_0x233c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainExit__Fv_0x233c90");
#endif

    switch (ctx->pc) {
        case 0x233c90u: goto label_233c90;
        case 0x233c94u: goto label_233c94;
        case 0x233c98u: goto label_233c98;
        case 0x233c9cu: goto label_233c9c;
        case 0x233ca0u: goto label_233ca0;
        case 0x233ca4u: goto label_233ca4;
        case 0x233ca8u: goto label_233ca8;
        case 0x233cacu: goto label_233cac;
        case 0x233cb0u: goto label_233cb0;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cb8u: goto label_233cb8;
        case 0x233cbcu: goto label_233cbc;
        case 0x233cc0u: goto label_233cc0;
        case 0x233cc4u: goto label_233cc4;
        case 0x233cc8u: goto label_233cc8;
        case 0x233cccu: goto label_233ccc;
        case 0x233cd0u: goto label_233cd0;
        case 0x233cd4u: goto label_233cd4;
        case 0x233cd8u: goto label_233cd8;
        case 0x233cdcu: goto label_233cdc;
        case 0x233ce0u: goto label_233ce0;
        case 0x233ce4u: goto label_233ce4;
        case 0x233ce8u: goto label_233ce8;
        case 0x233cecu: goto label_233cec;
        case 0x233cf0u: goto label_233cf0;
        case 0x233cf4u: goto label_233cf4;
        case 0x233cf8u: goto label_233cf8;
        case 0x233cfcu: goto label_233cfc;
        case 0x233d00u: goto label_233d00;
        case 0x233d04u: goto label_233d04;
        case 0x233d08u: goto label_233d08;
        case 0x233d0cu: goto label_233d0c;
        case 0x233d10u: goto label_233d10;
        case 0x233d14u: goto label_233d14;
        case 0x233d18u: goto label_233d18;
        case 0x233d1cu: goto label_233d1c;
        case 0x233d20u: goto label_233d20;
        case 0x233d24u: goto label_233d24;
        case 0x233d28u: goto label_233d28;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        case 0x233e90u: goto label_233e90;
        case 0x233e94u: goto label_233e94;
        case 0x233e98u: goto label_233e98;
        case 0x233e9cu: goto label_233e9c;
        case 0x233ea0u: goto label_233ea0;
        case 0x233ea4u: goto label_233ea4;
        case 0x233ea8u: goto label_233ea8;
        case 0x233eacu: goto label_233eac;
        case 0x233eb0u: goto label_233eb0;
        case 0x233eb4u: goto label_233eb4;
        case 0x233eb8u: goto label_233eb8;
        case 0x233ebcu: goto label_233ebc;
        case 0x233ec0u: goto label_233ec0;
        case 0x233ec4u: goto label_233ec4;
        case 0x233ec8u: goto label_233ec8;
        case 0x233eccu: goto label_233ecc;
        case 0x233ed0u: goto label_233ed0;
        case 0x233ed4u: goto label_233ed4;
        case 0x233ed8u: goto label_233ed8;
        case 0x233edcu: goto label_233edc;
        case 0x233ee0u: goto label_233ee0;
        case 0x233ee4u: goto label_233ee4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233eecu: goto label_233eec;
        case 0x233ef0u: goto label_233ef0;
        case 0x233ef4u: goto label_233ef4;
        case 0x233ef8u: goto label_233ef8;
        case 0x233efcu: goto label_233efc;
        case 0x233f00u: goto label_233f00;
        case 0x233f04u: goto label_233f04;
        case 0x233f08u: goto label_233f08;
        case 0x233f0cu: goto label_233f0c;
        case 0x233f10u: goto label_233f10;
        case 0x233f14u: goto label_233f14;
        case 0x233f18u: goto label_233f18;
        case 0x233f1cu: goto label_233f1c;
        case 0x233f20u: goto label_233f20;
        case 0x233f24u: goto label_233f24;
        case 0x233f28u: goto label_233f28;
        case 0x233f2cu: goto label_233f2c;
        case 0x233f30u: goto label_233f30;
        case 0x233f34u: goto label_233f34;
        case 0x233f38u: goto label_233f38;
        case 0x233f3cu: goto label_233f3c;
        case 0x233f40u: goto label_233f40;
        case 0x233f44u: goto label_233f44;
        case 0x233f48u: goto label_233f48;
        case 0x233f4cu: goto label_233f4c;
        case 0x233f50u: goto label_233f50;
        case 0x233f54u: goto label_233f54;
        case 0x233f58u: goto label_233f58;
        case 0x233f5cu: goto label_233f5c;
        case 0x233f60u: goto label_233f60;
        case 0x233f64u: goto label_233f64;
        case 0x233f68u: goto label_233f68;
        case 0x233f6cu: goto label_233f6c;
        case 0x233f70u: goto label_233f70;
        case 0x233f74u: goto label_233f74;
        case 0x233f78u: goto label_233f78;
        case 0x233f7cu: goto label_233f7c;
        case 0x233f80u: goto label_233f80;
        case 0x233f84u: goto label_233f84;
        case 0x233f88u: goto label_233f88;
        case 0x233f8cu: goto label_233f8c;
        case 0x233f90u: goto label_233f90;
        case 0x233f94u: goto label_233f94;
        case 0x233f98u: goto label_233f98;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fa0u: goto label_233fa0;
        case 0x233fa4u: goto label_233fa4;
        case 0x233fa8u: goto label_233fa8;
        case 0x233facu: goto label_233fac;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fb4u: goto label_233fb4;
        default: break;
    }

    ctx->pc = 0x233c90u;

label_233c90:
    // 0x233c90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_233c94:
    // 0x233c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x233c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_233c98:
    // 0x233c98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x233c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_233c9c:
    // 0x233c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x233c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_233ca0:
    // 0x233ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_233ca4:
    // 0x233ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x233ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_233ca8:
    // 0x233ca8: 0x8f84952c  lw          $a0, -0x6AD4($gp)
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939948)));
label_233cac:
    // 0x233cac: 0xc050dc8  jal         func_143720
label_233cb0:
    if (ctx->pc == 0x233CB0u) {
        ctx->pc = 0x233CB0u;
            // 0x233cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233CB4u;
        goto label_233cb4;
    }
    ctx->pc = 0x233CACu;
    SET_GPR_U32(ctx, 31, 0x233CB4u);
    ctx->pc = 0x233CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CACu;
            // 0x233cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CB4u; }
        if (ctx->pc != 0x233CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CB4u; }
        if (ctx->pc != 0x233CB4u) { return; }
    }
    ctx->pc = 0x233CB4u;
label_233cb4:
    // 0x233cb4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233cb8:
    // 0x233cb8: 0xc0944a4  jal         func_251290
label_233cbc:
    if (ctx->pc == 0x233CBCu) {
        ctx->pc = 0x233CBCu;
            // 0x233cbc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x233CC0u;
        goto label_233cc0;
    }
    ctx->pc = 0x233CB8u;
    SET_GPR_U32(ctx, 31, 0x233CC0u);
    ctx->pc = 0x233CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CB8u;
            // 0x233cbc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251290u;
    if (runtime->hasFunction(0x251290u)) {
        auto targetFn = runtime->lookupFunction(0x251290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CC0u; }
        if (ctx->pc != 0x233CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDeleteTextureBlock__FPi_0x251290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CC0u; }
        if (ctx->pc != 0x233CC0u) { return; }
    }
    ctx->pc = 0x233CC0u;
label_233cc0:
    // 0x233cc0: 0xc0c2720  jal         func_309C80
label_233cc4:
    if (ctx->pc == 0x233CC4u) {
        ctx->pc = 0x233CC4u;
            // 0x233cc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233CC8u;
        goto label_233cc8;
    }
    ctx->pc = 0x233CC0u;
    SET_GPR_U32(ctx, 31, 0x233CC8u);
    ctx->pc = 0x233CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CC0u;
            // 0x233cc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309C80u;
    if (runtime->hasFunction(0x309C80u)) {
        auto targetFn = runtime->lookupFunction(0x309C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CC8u; }
        if (ctx->pc != 0x233CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseEnable__Fi_0x309c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CC8u; }
        if (ctx->pc != 0x233CC8u) { return; }
    }
    ctx->pc = 0x233CC8u;
label_233cc8:
    // 0x233cc8: 0xc08cb60  jal         func_232D80
label_233ccc:
    if (ctx->pc == 0x233CCCu) {
        ctx->pc = 0x233CCCu;
            // 0x233ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233CD0u;
        goto label_233cd0;
    }
    ctx->pc = 0x233CC8u;
    SET_GPR_U32(ctx, 31, 0x233CD0u);
    ctx->pc = 0x233CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CC8u;
            // 0x233ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (runtime->hasFunction(0x232D80u)) {
        auto targetFn = runtime->lookupFunction(0x232D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CD0u; }
        if (ctx->pc != 0x233CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisablePadReset__Fi_0x232d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CD0u; }
        if (ctx->pc != 0x233CD0u) { return; }
    }
    ctx->pc = 0x233CD0u;
label_233cd0:
    // 0x233cd0: 0x9382978c  lbu         $v0, -0x6874($gp)
    ctx->pc = 0x233cd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940556)));
label_233cd4:
    // 0x233cd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_233cd8:
    if (ctx->pc == 0x233CD8u) {
        ctx->pc = 0x233CD8u;
            // 0x233cd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x233CDCu;
        goto label_233cdc;
    }
    ctx->pc = 0x233CD4u;
    {
        const bool branch_taken_0x233cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233CD4u;
            // 0x233cd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd4) {
            ctx->pc = 0x233CE4u;
            goto label_233ce4;
        }
    }
    ctx->pc = 0x233CDCu;
label_233cdc:
    // 0x233cdc: 0xc06334c  jal         func_18CD30
label_233ce0:
    if (ctx->pc == 0x233CE0u) {
        ctx->pc = 0x233CE4u;
        goto label_233ce4;
    }
    ctx->pc = 0x233CDCu;
    SET_GPR_U32(ctx, 31, 0x233CE4u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CE4u; }
        if (ctx->pc != 0x233CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CE4u; }
        if (ctx->pc != 0x233CE4u) { return; }
    }
    ctx->pc = 0x233CE4u;
label_233ce4:
    // 0x233ce4: 0xc78c94ec  lwc1        $f12, -0x6B14($gp)
    ctx->pc = 0x233ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_233ce8:
    // 0x233ce8: 0xc063508  jal         func_18D420
label_233cec:
    if (ctx->pc == 0x233CECu) {
        ctx->pc = 0x233CECu;
            // 0x233cec: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x233CF0u;
        goto label_233cf0;
    }
    ctx->pc = 0x233CE8u;
    SET_GPR_U32(ctx, 31, 0x233CF0u);
    ctx->pc = 0x233CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CE8u;
            // 0x233cec: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CF0u; }
        if (ctx->pc != 0x233CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233CF0u; }
        if (ctx->pc != 0x233CF0u) { return; }
    }
    ctx->pc = 0x233CF0u;
label_233cf0:
    // 0x233cf0: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x233cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_233cf4:
    // 0x233cf4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_233cf8:
    // 0x233cf8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_233cfc:
    // 0x233cfc: 0xc0683a8  jal         func_1A0EA0
label_233d00:
    if (ctx->pc == 0x233D00u) {
        ctx->pc = 0x233D00u;
            // 0x233d00: 0x84324d96  lh          $s2, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->pc = 0x233D04u;
        goto label_233d04;
    }
    ctx->pc = 0x233CFCu;
    SET_GPR_U32(ctx, 31, 0x233D04u);
    ctx->pc = 0x233D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233CFCu;
            // 0x233d00: 0x84324d96  lh          $s2, 0x4D96($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D04u; }
        if (ctx->pc != 0x233D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D04u; }
        if (ctx->pc != 0x233D04u) { return; }
    }
    ctx->pc = 0x233D04u;
label_233d04:
    // 0x233d04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233d08:
    // 0x233d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233d0c:
    // 0x233d0c: 0x8c22d62c  lw          $v0, -0x29D4($at)
    ctx->pc = 0x233d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_233d10:
    // 0x233d10: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_233d14:
    if (ctx->pc == 0x233D14u) {
        ctx->pc = 0x233D14u;
            // 0x233d14: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x233D18u;
        goto label_233d18;
    }
    ctx->pc = 0x233D10u;
    {
        const bool branch_taken_0x233d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x233D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D10u;
            // 0x233d14: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d10) {
            ctx->pc = 0x233D20u;
            goto label_233d20;
        }
    }
    ctx->pc = 0x233D18u;
label_233d18:
    // 0x233d18: 0xc08cb08  jal         func_232C20
label_233d1c:
    if (ctx->pc == 0x233D1Cu) {
        ctx->pc = 0x233D1Cu;
            // 0x233d1c: 0x8c32d630  lw          $s2, -0x29D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
        ctx->pc = 0x233D20u;
        goto label_233d20;
    }
    ctx->pc = 0x233D18u;
    SET_GPR_U32(ctx, 31, 0x233D20u);
    ctx->pc = 0x233D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D18u;
            // 0x233d1c: 0x8c32d630  lw          $s2, -0x29D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C20u;
    if (runtime->hasFunction(0x232C20u)) {
        auto targetFn = runtime->lookupFunction(0x232C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D20u; }
        if (ctx->pc != 0x233D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuEtcFlag__Fi_0x232c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D20u; }
        if (ctx->pc != 0x233D20u) { return; }
    }
    ctx->pc = 0x233D20u;
label_233d20:
    // 0x233d20: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233d24:
    // 0x233d24: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x233d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_233d28:
    // 0x233d28: 0xc0670f4  jal         func_19C3D0
label_233d2c:
    if (ctx->pc == 0x233D2Cu) {
        ctx->pc = 0x233D2Cu;
            // 0x233d2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233D30u;
        goto label_233d30;
    }
    ctx->pc = 0x233D28u;
    SET_GPR_U32(ctx, 31, 0x233D30u);
    ctx->pc = 0x233D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D28u;
            // 0x233d2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D30u; }
        if (ctx->pc != 0x233D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D30u; }
        if (ctx->pc != 0x233D30u) { return; }
    }
    ctx->pc = 0x233D30u;
label_233d30:
    // 0x233d30: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x233d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_233d34:
    // 0x233d34: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_233d38:
    if (ctx->pc == 0x233D38u) {
        ctx->pc = 0x233D3Cu;
        goto label_233d3c;
    }
    ctx->pc = 0x233D34u;
    {
        const bool branch_taken_0x233d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d34) {
            ctx->pc = 0x233E10u;
            goto label_233e10;
        }
    }
    ctx->pc = 0x233D3Cu;
label_233d3c:
    // 0x233d3c: 0xc0a0ed8  jal         func_283B60
label_233d40:
    if (ctx->pc == 0x233D40u) {
        ctx->pc = 0x233D40u;
            // 0x233d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233D44u;
        goto label_233d44;
    }
    ctx->pc = 0x233D3Cu;
    SET_GPR_U32(ctx, 31, 0x233D44u);
    ctx->pc = 0x233D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233D3Cu;
            // 0x233d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D44u; }
        if (ctx->pc != 0x233D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D44u; }
        if (ctx->pc != 0x233D44u) { return; }
    }
    ctx->pc = 0x233D44u;
label_233d44:
    // 0x233d44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233d48:
    // 0x233d48: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_233d4c:
    if (ctx->pc == 0x233D4Cu) {
        ctx->pc = 0x233D50u;
        goto label_233d50;
    }
    ctx->pc = 0x233D48u;
    {
        const bool branch_taken_0x233d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233d48) {
            ctx->pc = 0x233D80u;
            goto label_233d80;
        }
    }
    ctx->pc = 0x233D50u;
label_233d50:
    // 0x233d50: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233d54:
    // 0x233d54: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x233d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_233d58:
    // 0x233d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233d5c:
    // 0x233d5c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x233d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_233d60:
    // 0x233d60: 0x320f809  jalr        $t9
label_233d64:
    if (ctx->pc == 0x233D64u) {
        ctx->pc = 0x233D64u;
            // 0x233d64: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->pc = 0x233D68u;
        goto label_233d68;
    }
    ctx->pc = 0x233D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233D68u);
        ctx->pc = 0x233D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D60u;
            // 0x233d64: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233D68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233D68u; }
            if (ctx->pc != 0x233D68u) { return; }
        }
        }
    }
    ctx->pc = 0x233D68u;
label_233d68:
    // 0x233d68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233d6c:
    // 0x233d6c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x233d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_233d70:
    // 0x233d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233d74:
    // 0x233d74: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x233d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_233d78:
    // 0x233d78: 0x320f809  jalr        $t9
label_233d7c:
    if (ctx->pc == 0x233D7Cu) {
        ctx->pc = 0x233D7Cu;
            // 0x233d7c: 0x24a5d6a0  addiu       $a1, $a1, -0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956704));
        ctx->pc = 0x233D80u;
        goto label_233d80;
    }
    ctx->pc = 0x233D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233D80u);
        ctx->pc = 0x233D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D78u;
            // 0x233d7c: 0x24a5d6a0  addiu       $a1, $a1, -0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233D80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233D80u; }
            if (ctx->pc != 0x233D80u) { return; }
        }
        }
    }
    ctx->pc = 0x233D80u;
label_233d80:
    // 0x233d80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233d84:
    // 0x233d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233d88:
    // 0x233d88: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x233d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_233d8c:
    // 0x233d8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_233d90:
    if (ctx->pc == 0x233D90u) {
        ctx->pc = 0x233D90u;
            // 0x233d90: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x233D94u;
        goto label_233d94;
    }
    ctx->pc = 0x233D8Cu;
    {
        const bool branch_taken_0x233d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D8Cu;
            // 0x233d90: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d8c) {
            ctx->pc = 0x233D9Cu;
            goto label_233d9c;
        }
    }
    ctx->pc = 0x233D94u;
label_233d94:
    // 0x233d94: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_233d98:
    if (ctx->pc == 0x233D98u) {
        ctx->pc = 0x233D9Cu;
        goto label_233d9c;
    }
    ctx->pc = 0x233D94u;
    {
        const bool branch_taken_0x233d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233d94) {
            ctx->pc = 0x233E04u;
            goto label_233e04;
        }
    }
    ctx->pc = 0x233D9Cu;
label_233d9c:
    // 0x233d9c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_233da0:
    if (ctx->pc == 0x233DA0u) {
        ctx->pc = 0x233DA0u;
            // 0x233da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233DA4u;
        goto label_233da4;
    }
    ctx->pc = 0x233D9Cu;
    {
        const bool branch_taken_0x233d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233D9Cu;
            // 0x233da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d9c) {
            ctx->pc = 0x233E04u;
            goto label_233e04;
        }
    }
    ctx->pc = 0x233DA4u;
label_233da4:
    // 0x233da4: 0xc05cdc0  jal         func_173700
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    SET_GPR_U32(ctx, 31, 0x233DACu);
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DACu; }
        if (ctx->pc != 0x233DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DACu; }
        if (ctx->pc != 0x233DACu) { return; }
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x233dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_233db0:
    // 0x233db0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_233db4:
    if (ctx->pc == 0x233DB4u) {
        ctx->pc = 0x233DB4u;
            // 0x233db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233DB8u;
        goto label_233db8;
    }
    ctx->pc = 0x233DB0u;
    {
        const bool branch_taken_0x233db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DB0u;
            // 0x233db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233db0) {
            ctx->pc = 0x233DE8u;
            goto label_233de8;
        }
    }
    ctx->pc = 0x233DB8u;
label_233db8:
    // 0x233db8: 0x10000006  b           . + 4 + (0x6 << 2)
label_233dbc:
    if (ctx->pc == 0x233DBCu) {
        ctx->pc = 0x233DBCu;
            // 0x233dbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233DC0u;
        goto label_233dc0;
    }
    ctx->pc = 0x233DB8u;
    {
        const bool branch_taken_0x233db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DB8u;
            // 0x233dbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233db8) {
            ctx->pc = 0x233DD4u;
            goto label_233dd4;
        }
    }
    ctx->pc = 0x233DC0u;
label_233dc0:
    // 0x233dc0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x233dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_233dc4:
    // 0x233dc4: 0xc05e61c  jal         func_179870
label_233dc8:
    if (ctx->pc == 0x233DC8u) {
        ctx->pc = 0x233DC8u;
            // 0x233dc8: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x233DCCu;
        goto label_233dcc;
    }
    ctx->pc = 0x233DC4u;
    SET_GPR_U32(ctx, 31, 0x233DCCu);
    ctx->pc = 0x233DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233DC4u;
            // 0x233dc8: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x179870u;
    if (runtime->hasFunction(0x179870u)) {
        auto targetFn = runtime->lookupFunction(0x179870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DCCu; }
        if (ctx->pc != 0x233DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPosition__13CDynamicAnimeFv_0x179870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DCCu; }
        if (ctx->pc != 0x233DCCu) { return; }
    }
    ctx->pc = 0x233DCCu;
label_233dcc:
    // 0x233dcc: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_233dd0:
    // 0x233dd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x233dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_233dd4:
    // 0x233dd4: 0x0  nop
    ctx->pc = 0x233dd4u;
    // NOP
label_233dd8:
    // 0x233dd8: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x233dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_233ddc:
    // 0x233ddc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x233ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_233de0:
    // 0x233de0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_233de4:
    if (ctx->pc == 0x233DE4u) {
        ctx->pc = 0x233DE8u;
        goto label_233de8;
    }
    ctx->pc = 0x233DE0u;
    {
        const bool branch_taken_0x233de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233de0) {
            ctx->pc = 0x233DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc0;
        }
    }
    ctx->pc = 0x233DE8u;
label_233de8:
    // 0x233de8: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_233dec:
    // 0x233dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x233decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233df0:
    // 0x233df0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233df4:
    // 0x233df4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x233df4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_233df8:
    // 0x233df8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x233df8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_233dfc:
    // 0x233dfc: 0xc05f610  jal         func_17D840
label_233e00:
    if (ctx->pc == 0x233E00u) {
        ctx->pc = 0x233E00u;
            // 0x233e00: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x233E04u;
        goto label_233e04;
    }
    ctx->pc = 0x233DFCu;
    SET_GPR_U32(ctx, 31, 0x233E04u);
    ctx->pc = 0x233E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233DFCu;
            // 0x233e00: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E04u; }
        if (ctx->pc != 0x233E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E04u; }
        if (ctx->pc != 0x233E04u) { return; }
    }
    ctx->pc = 0x233E04u;
label_233e04:
    // 0x233e04: 0x8f859514  lw          $a1, -0x6AEC($gp)
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939924)));
label_233e08:
    // 0x233e08: 0xc0a98b8  jal         func_2A62E0
label_233e0c:
    if (ctx->pc == 0x233E0Cu) {
        ctx->pc = 0x233E0Cu;
            // 0x233e0c: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->pc = 0x233E10u;
        goto label_233e10;
    }
    ctx->pc = 0x233E08u;
    SET_GPR_U32(ctx, 31, 0x233E10u);
    ctx->pc = 0x233E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E08u;
            // 0x233e0c: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A62E0u;
    if (runtime->hasFunction(0x2A62E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A62E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E10u; }
        if (ctx->pc != 0x233E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolBGM__6CSceneFi_0x2a62e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E10u; }
        if (ctx->pc != 0x233E10u) { return; }
    }
    ctx->pc = 0x233E10u;
label_233e10:
    // 0x233e10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233e14:
    // 0x233e14: 0x8c22d62c  lw          $v0, -0x29D4($at)
    ctx->pc = 0x233e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_233e18:
    // 0x233e18: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x233e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_233e1c:
    // 0x233e1c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x233e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_233e20:
    // 0x233e20: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x233e20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_233e24:
    // 0x233e24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x233e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_233e28:
    // 0x233e28: 0x1640002d  bnez        $s2, . + 4 + (0x2D << 2)
label_233e2c:
    if (ctx->pc == 0x233E2Cu) {
        ctx->pc = 0x233E2Cu;
            // 0x233e2c: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x233E30u;
        goto label_233e30;
    }
    ctx->pc = 0x233E28u;
    {
        const bool branch_taken_0x233e28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E28u;
            // 0x233e2c: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e28) {
            ctx->pc = 0x233EE0u;
            goto label_233ee0;
        }
    }
    ctx->pc = 0x233E30u;
label_233e30:
    // 0x233e30: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233e34:
    // 0x233e34: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x233e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
label_233e38:
    // 0x233e38: 0xc0664ac  jal         func_1992B0
label_233e3c:
    if (ctx->pc == 0x233E3Cu) {
        ctx->pc = 0x233E3Cu;
            // 0x233e3c: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->pc = 0x233E40u;
        goto label_233e40;
    }
    ctx->pc = 0x233E38u;
    SET_GPR_U32(ctx, 31, 0x233E40u);
    ctx->pc = 0x233E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E38u;
            // 0x233e3c: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E40u; }
        if (ctx->pc != 0x233E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E40u; }
        if (ctx->pc != 0x233E40u) { return; }
    }
    ctx->pc = 0x233E40u;
label_233e40:
    // 0x233e40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_233e44:
    if (ctx->pc == 0x233E44u) {
        ctx->pc = 0x233E44u;
            // 0x233e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x233E48u;
        goto label_233e48;
    }
    ctx->pc = 0x233E40u;
    {
        const bool branch_taken_0x233e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E40u;
            // 0x233e44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e40) {
            ctx->pc = 0x233EE4u;
            goto label_233ee4;
        }
    }
    ctx->pc = 0x233E48u;
label_233e48:
    // 0x233e48: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
label_233e4c:
    if (ctx->pc == 0x233E4Cu) {
        ctx->pc = 0x233E50u;
        goto label_233e50;
    }
    ctx->pc = 0x233E48u;
    {
        const bool branch_taken_0x233e48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233e48) {
            ctx->pc = 0x233ED8u;
            goto label_233ed8;
        }
    }
    ctx->pc = 0x233E50u;
label_233e50:
    // 0x233e50: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x233e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_233e54:
    // 0x233e54: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_233e58:
    // 0x233e58: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233e5c:
    // 0x233e5c: 0xc0673a8  jal         func_19CEA0
label_233e60:
    if (ctx->pc == 0x233E60u) {
        ctx->pc = 0x233E60u;
            // 0x233e60: 0xac22d62c  sw          $v0, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
        ctx->pc = 0x233E64u;
        goto label_233e64;
    }
    ctx->pc = 0x233E5Cu;
    SET_GPR_U32(ctx, 31, 0x233E64u);
    ctx->pc = 0x233E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E5Cu;
            // 0x233e60: 0xac22d62c  sw          $v0, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E64u; }
        if (ctx->pc != 0x233E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E64u; }
        if (ctx->pc != 0x233E64u) { return; }
    }
    ctx->pc = 0x233E64u;
label_233e64:
    // 0x233e64: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x233e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_233e68:
    // 0x233e68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233e6c:
    // 0x233e6c: 0xc0673d0  jal         func_19CF40
label_233e70:
    if (ctx->pc == 0x233E70u) {
        ctx->pc = 0x233E70u;
            // 0x233e70: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->pc = 0x233E74u;
        goto label_233e74;
    }
    ctx->pc = 0x233E6Cu;
    SET_GPR_U32(ctx, 31, 0x233E74u);
    ctx->pc = 0x233E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E6Cu;
            // 0x233e70: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF40u;
    if (runtime->hasFunction(0x19CF40u)) {
        auto targetFn = runtime->lookupFunction(0x19CF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E74u; }
        if (ctx->pc != 0x233E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishBait__16CUserDataManagerFv_0x19cf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E74u; }
        if (ctx->pc != 0x233E74u) { return; }
    }
    ctx->pc = 0x233E74u;
label_233e74:
    // 0x233e74: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233e78:
    // 0x233e78: 0xc08ca88  jal         func_232A20
label_233e7c:
    if (ctx->pc == 0x233E7Cu) {
        ctx->pc = 0x233E7Cu;
            // 0x233e7c: 0xac22d634  sw          $v0, -0x29CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
        ctx->pc = 0x233E80u;
        goto label_233e80;
    }
    ctx->pc = 0x233E78u;
    SET_GPR_U32(ctx, 31, 0x233E80u);
    ctx->pc = 0x233E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E78u;
            // 0x233e7c: 0xac22d634  sw          $v0, -0x29CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E80u; }
        if (ctx->pc != 0x233E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E80u; }
        if (ctx->pc != 0x233E80u) { return; }
    }
    ctx->pc = 0x233E80u;
label_233e80:
    // 0x233e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233e84:
    // 0x233e84: 0x14450016  bne         $v0, $a1, . + 4 + (0x16 << 2)
label_233e88:
    if (ctx->pc == 0x233E88u) {
        ctx->pc = 0x233E8Cu;
        goto label_233e8c;
    }
    ctx->pc = 0x233E84u;
    {
        const bool branch_taken_0x233e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x233e84) {
            ctx->pc = 0x233EE0u;
            goto label_233ee0;
        }
    }
    ctx->pc = 0x233E8Cu;
label_233e8c:
    // 0x233e8c: 0xc0a0ed8  jal         func_283B60
label_233e90:
    if (ctx->pc == 0x233E90u) {
        ctx->pc = 0x233E90u;
            // 0x233e90: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->pc = 0x233E94u;
        goto label_233e94;
    }
    ctx->pc = 0x233E8Cu;
    SET_GPR_U32(ctx, 31, 0x233E94u);
    ctx->pc = 0x233E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E8Cu;
            // 0x233e90: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E94u; }
        if (ctx->pc != 0x233E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E94u; }
        if (ctx->pc != 0x233E94u) { return; }
    }
    ctx->pc = 0x233E94u;
label_233e94:
    // 0x233e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233e98:
    // 0x233e98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_233e9c:
    if (ctx->pc == 0x233E9Cu) {
        ctx->pc = 0x233E9Cu;
            // 0x233e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233EA0u;
        goto label_233ea0;
    }
    ctx->pc = 0x233E98u;
    {
        const bool branch_taken_0x233e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E98u;
            // 0x233e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e98) {
            ctx->pc = 0x233EBCu;
            goto label_233ebc;
        }
    }
    ctx->pc = 0x233EA0u;
label_233ea0:
    // 0x233ea0: 0xc05d398  jal         func_174E60
label_233ea4:
    if (ctx->pc == 0x233EA4u) {
        ctx->pc = 0x233EA8u;
        goto label_233ea8;
    }
    ctx->pc = 0x233EA0u;
    SET_GPR_U32(ctx, 31, 0x233EA8u);
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EA8u; }
        if (ctx->pc != 0x233EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EA8u; }
        if (ctx->pc != 0x233EA8u) { return; }
    }
    ctx->pc = 0x233EA8u;
label_233ea8:
    // 0x233ea8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233eac:
    // 0x233eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233eb0:
    // 0x233eb0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_233eb4:
    // 0x233eb4: 0x320f809  jalr        $t9
label_233eb8:
    if (ctx->pc == 0x233EB8u) {
        ctx->pc = 0x233EB8u;
            // 0x233eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233EBCu;
        goto label_233ebc;
    }
    ctx->pc = 0x233EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233EBCu);
        ctx->pc = 0x233EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EB4u;
            // 0x233eb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233EBCu; }
            if (ctx->pc != 0x233EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x233EBCu;
label_233ebc:
    // 0x233ebc: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x233ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_233ec0:
    // 0x233ec0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x233ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233ec4:
    // 0x233ec4: 0x8f8594ac  lw          $a1, -0x6B54($gp)
    ctx->pc = 0x233ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_233ec8:
    // 0x233ec8: 0xc07a750  jal         func_1E9D40
label_233ecc:
    if (ctx->pc == 0x233ECCu) {
        ctx->pc = 0x233ECCu;
            // 0x233ecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233ED0u;
        goto label_233ed0;
    }
    ctx->pc = 0x233EC8u;
    SET_GPR_U32(ctx, 31, 0x233ED0u);
    ctx->pc = 0x233ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233EC8u;
            // 0x233ecc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D40u;
    if (runtime->hasFunction(0x1E9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233ED0u; }
        if (ctx->pc != 0x233ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupUnitMan__FP6CSceneP16CUserDataManageriP14ROBO_INFO_DATA_0x1e9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233ED0u; }
        if (ctx->pc != 0x233ED0u) { return; }
    }
    ctx->pc = 0x233ED0u;
label_233ed0:
    // 0x233ed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_233ed4:
    if (ctx->pc == 0x233ED4u) {
        ctx->pc = 0x233ED8u;
        goto label_233ed8;
    }
    ctx->pc = 0x233ED0u;
    {
        const bool branch_taken_0x233ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233ed0) {
            ctx->pc = 0x233EE0u;
            goto label_233ee0;
        }
    }
    ctx->pc = 0x233ED8u;
label_233ed8:
    // 0x233ed8: 0xc065b88  jal         func_196E20
label_233edc:
    if (ctx->pc == 0x233EDCu) {
        ctx->pc = 0x233EE0u;
        goto label_233ee0;
    }
    ctx->pc = 0x233ED8u;
    SET_GPR_U32(ctx, 31, 0x233EE0u);
    ctx->pc = 0x196E20u;
    if (runtime->hasFunction(0x196E20u)) {
        auto targetFn = runtime->lookupFunction(0x196E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EE0u; }
        if (ctx->pc != 0x233EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReEquipFishingGameWeapon__Fv_0x196e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EE0u; }
        if (ctx->pc != 0x233EE0u) { return; }
    }
    ctx->pc = 0x233EE0u;
label_233ee0:
    // 0x233ee0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x233ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233ee4:
    // 0x233ee4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x233ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ee8:
    // 0x233ee8: 0xc08cb34  jal         func_232CD0
label_233eec:
    if (ctx->pc == 0x233EECu) {
        ctx->pc = 0x233EECu;
            // 0x233eec: 0xaf828300  sw          $v0, -0x7D00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 2));
        ctx->pc = 0x233EF0u;
        goto label_233ef0;
    }
    ctx->pc = 0x233EE8u;
    SET_GPR_U32(ctx, 31, 0x233EF0u);
    ctx->pc = 0x233EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233EE8u;
            // 0x233eec: 0xaf828300  sw          $v0, -0x7D00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EF0u; }
        if (ctx->pc != 0x233EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EF0u; }
        if (ctx->pc != 0x233EF0u) { return; }
    }
    ctx->pc = 0x233EF0u;
label_233ef0:
    // 0x233ef0: 0xc08ad24  jal         func_22B490
label_233ef4:
    if (ctx->pc == 0x233EF4u) {
        ctx->pc = 0x233EF4u;
            // 0x233ef4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x233EF8u;
        goto label_233ef8;
    }
    ctx->pc = 0x233EF0u;
    SET_GPR_U32(ctx, 31, 0x233EF8u);
    ctx->pc = 0x233EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233EF0u;
            // 0x233ef4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B490u;
    if (runtime->hasFunction(0x22B490u)) {
        auto targetFn = runtime->lookupFunction(0x22B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EF8u; }
        if (ctx->pc != 0x233EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearPos__14CPosDataManageFv_0x22b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EF8u; }
        if (ctx->pc != 0x233EF8u) { return; }
    }
    ctx->pc = 0x233EF8u;
label_233ef8:
    // 0x233ef8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233efc:
    // 0x233efc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x233efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233f00:
    // 0x233f00: 0xac20d514  sw          $zero, -0x2AEC($at)
    ctx->pc = 0x233f00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956308), GPR_U32(ctx, 0));
label_233f04:
    // 0x233f04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233f08:
    // 0x233f08: 0xaf809450  sw          $zero, -0x6BB0($gp)
    ctx->pc = 0x233f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939728), GPR_U32(ctx, 0));
label_233f0c:
    // 0x233f0c: 0xc0bc508  jal         func_2F1420
label_233f10:
    if (ctx->pc == 0x233F10u) {
        ctx->pc = 0x233F10u;
            // 0x233f10: 0xac20d50c  sw          $zero, -0x2AF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956300), GPR_U32(ctx, 0));
        ctx->pc = 0x233F14u;
        goto label_233f14;
    }
    ctx->pc = 0x233F0Cu;
    SET_GPR_U32(ctx, 31, 0x233F14u);
    ctx->pc = 0x233F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F0Cu;
            // 0x233f10: 0xac20d50c  sw          $zero, -0x2AF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1420u;
    if (runtime->hasFunction(0x2F1420u)) {
        auto targetFn = runtime->lookupFunction(0x2F1420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F14u; }
        if (ctx->pc != 0x233F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDngTreeFlag__Fi_0x2f1420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F14u; }
        if (ctx->pc != 0x233F14u) { return; }
    }
    ctx->pc = 0x233F14u;
label_233f14:
    // 0x233f14: 0xc08cb30  jal         func_232CC0
label_233f18:
    if (ctx->pc == 0x233F18u) {
        ctx->pc = 0x233F18u;
            // 0x233f18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233F1Cu;
        goto label_233f1c;
    }
    ctx->pc = 0x233F14u;
    SET_GPR_U32(ctx, 31, 0x233F1Cu);
    ctx->pc = 0x233F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F14u;
            // 0x233f18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F1Cu; }
        if (ctx->pc != 0x233F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F1Cu; }
        if (ctx->pc != 0x233F1Cu) { return; }
    }
    ctx->pc = 0x233F1Cu;
label_233f1c:
    // 0x233f1c: 0xaf8094cc  sw          $zero, -0x6B34($gp)
    ctx->pc = 0x233f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939852), GPR_U32(ctx, 0));
label_233f20:
    // 0x233f20: 0xc098928  jal         func_2624A0
label_233f24:
    if (ctx->pc == 0x233F24u) {
        ctx->pc = 0x233F24u;
            // 0x233f24: 0xaf809520  sw          $zero, -0x6AE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939936), GPR_U32(ctx, 0));
        ctx->pc = 0x233F28u;
        goto label_233f28;
    }
    ctx->pc = 0x233F20u;
    SET_GPR_U32(ctx, 31, 0x233F28u);
    ctx->pc = 0x233F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F20u;
            // 0x233f24: 0xaf809520  sw          $zero, -0x6AE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2624A0u;
    if (runtime->hasFunction(0x2624A0u)) {
        auto targetFn = runtime->lookupFunction(0x2624A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F28u; }
        if (ctx->pc != 0x233F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventMenuExit__Fv_0x2624a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F28u; }
        if (ctx->pc != 0x233F28u) { return; }
    }
    ctx->pc = 0x233F28u;
label_233f28:
    // 0x233f28: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_233f2c:
    // 0x233f2c: 0xc050d88  jal         func_143620
label_233f30:
    if (ctx->pc == 0x233F30u) {
        ctx->pc = 0x233F30u;
            // 0x233f30: 0xc44c00a8  lwc1        $f12, 0xA8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x233F34u;
        goto label_233f34;
    }
    ctx->pc = 0x233F2Cu;
    SET_GPR_U32(ctx, 31, 0x233F34u);
    ctx->pc = 0x233F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F2Cu;
            // 0x233f30: 0xc44c00a8  lwc1        $f12, 0xA8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F34u; }
        if (ctx->pc != 0x233F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F34u; }
        if (ctx->pc != 0x233F34u) { return; }
    }
    ctx->pc = 0x233F34u;
label_233f34:
    // 0x233f34: 0xc06421c  jal         func_190870
label_233f38:
    if (ctx->pc == 0x233F38u) {
        ctx->pc = 0x233F3Cu;
        goto label_233f3c;
    }
    ctx->pc = 0x233F34u;
    SET_GPR_U32(ctx, 31, 0x233F3Cu);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F3Cu; }
        if (ctx->pc != 0x233F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F3Cu; }
        if (ctx->pc != 0x233F3Cu) { return; }
    }
    ctx->pc = 0x233F3Cu;
label_233f3c:
    // 0x233f3c: 0x8c452e54  lw          $a1, 0x2E54($v0)
    ctx->pc = 0x233f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
label_233f40:
    // 0x233f40: 0xc0a0e30  jal         func_2838C0
label_233f44:
    if (ctx->pc == 0x233F44u) {
        ctx->pc = 0x233F44u;
            // 0x233f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233F48u;
        goto label_233f48;
    }
    ctx->pc = 0x233F40u;
    SET_GPR_U32(ctx, 31, 0x233F48u);
    ctx->pc = 0x233F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F40u;
            // 0x233f44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F48u; }
        if (ctx->pc != 0x233F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F48u; }
        if (ctx->pc != 0x233F48u) { return; }
    }
    ctx->pc = 0x233F48u;
label_233f48:
    // 0x233f48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233f4c:
    // 0x233f4c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_233f50:
    if (ctx->pc == 0x233F50u) {
        ctx->pc = 0x233F54u;
        goto label_233f54;
    }
    ctx->pc = 0x233F4Cu;
    {
        const bool branch_taken_0x233f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x233f4c) {
            ctx->pc = 0x233F98u;
            goto label_233f98;
        }
    }
    ctx->pc = 0x233F54u;
label_233f54:
    // 0x233f54: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_233f58:
    // 0x233f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233f5c:
    // 0x233f5c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_233f60:
    // 0x233f60: 0x320f809  jalr        $t9
label_233f64:
    if (ctx->pc == 0x233F64u) {
        ctx->pc = 0x233F64u;
            // 0x233f64: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x233F68u;
        goto label_233f68;
    }
    ctx->pc = 0x233F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x233F68u);
        ctx->pc = 0x233F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F60u;
            // 0x233f64: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x233F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x233F68u; }
            if (ctx->pc != 0x233F68u) { return; }
        }
        }
    }
    ctx->pc = 0x233F68u;
label_233f68:
    // 0x233f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233f6c:
    // 0x233f6c: 0xc04c574  jal         func_1315D0
label_233f70:
    if (ctx->pc == 0x233F70u) {
        ctx->pc = 0x233F70u;
            // 0x233f70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x233F74u;
        goto label_233f74;
    }
    ctx->pc = 0x233F6Cu;
    SET_GPR_U32(ctx, 31, 0x233F74u);
    ctx->pc = 0x233F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F6Cu;
            // 0x233f70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F74u; }
        if (ctx->pc != 0x233F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F74u; }
        if (ctx->pc != 0x233F74u) { return; }
    }
    ctx->pc = 0x233F74u;
label_233f74:
    // 0x233f74: 0xc041c7a  jal         func_1071E8
label_233f78:
    if (ctx->pc == 0x233F78u) {
        ctx->pc = 0x233F78u;
            // 0x233f78: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x233F7Cu;
        goto label_233f7c;
    }
    ctx->pc = 0x233F74u;
    SET_GPR_U32(ctx, 31, 0x233F7Cu);
    ctx->pc = 0x233F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F74u;
            // 0x233f78: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F7Cu; }
        if (ctx->pc != 0x233F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F7Cu; }
        if (ctx->pc != 0x233F7Cu) { return; }
    }
    ctx->pc = 0x233F7Cu;
label_233f7c:
    // 0x233f7c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_233f80:
    // 0x233f80: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x233f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_233f84:
    // 0x233f84: 0xc041bbc  jal         func_106EF0
label_233f88:
    if (ctx->pc == 0x233F88u) {
        ctx->pc = 0x233F88u;
            // 0x233f88: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x233F8Cu;
        goto label_233f8c;
    }
    ctx->pc = 0x233F84u;
    SET_GPR_U32(ctx, 31, 0x233F8Cu);
    ctx->pc = 0x233F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F84u;
            // 0x233f88: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F8Cu; }
        if (ctx->pc != 0x233F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F8Cu; }
        if (ctx->pc != 0x233F8Cu) { return; }
    }
    ctx->pc = 0x233F8Cu;
label_233f8c:
    // 0x233f8c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x233f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_233f90:
    // 0x233f90: 0xc050e28  jal         func_1438A0
label_233f94:
    if (ctx->pc == 0x233F94u) {
        ctx->pc = 0x233F94u;
            // 0x233f94: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x233F98u;
        goto label_233f98;
    }
    ctx->pc = 0x233F90u;
    SET_GPR_U32(ctx, 31, 0x233F98u);
    ctx->pc = 0x233F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F90u;
            // 0x233f94: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F98u; }
        if (ctx->pc != 0x233F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F98u; }
        if (ctx->pc != 0x233F98u) { return; }
    }
    ctx->pc = 0x233F98u;
label_233f98:
    // 0x233f98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x233f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_233f9c:
    // 0x233f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233fa0:
    // 0x233fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x233fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_233fa4:
    // 0x233fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233fa8:
    // 0x233fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_233fac:
    // 0x233fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_233fb0:
    // 0x233fb0: 0x3e00008  jr          $ra
label_233fb4:
    if (ctx->pc == 0x233FB4u) {
        ctx->pc = 0x233FB4u;
            // 0x233fb4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x233FB8u;
        goto label_fallthrough_0x233fb0;
    }
    ctx->pc = 0x233FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FB0u;
            // 0x233fb4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x233fb0:
    ctx->pc = 0x233FB8u;
}
