#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishBattle__FP6CSceneP6CCPolyi
// Address: 0x310cc0 - 0x31106c
void FishBattle__FP6CSceneP6CCPolyi_0x310cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishBattle__FP6CSceneP6CCPolyi_0x310cc0");
#endif

    switch (ctx->pc) {
        case 0x310cc0u: goto label_310cc0;
        case 0x310cc4u: goto label_310cc4;
        case 0x310cc8u: goto label_310cc8;
        case 0x310cccu: goto label_310ccc;
        case 0x310cd0u: goto label_310cd0;
        case 0x310cd4u: goto label_310cd4;
        case 0x310cd8u: goto label_310cd8;
        case 0x310cdcu: goto label_310cdc;
        case 0x310ce0u: goto label_310ce0;
        case 0x310ce4u: goto label_310ce4;
        case 0x310ce8u: goto label_310ce8;
        case 0x310cecu: goto label_310cec;
        case 0x310cf0u: goto label_310cf0;
        case 0x310cf4u: goto label_310cf4;
        case 0x310cf8u: goto label_310cf8;
        case 0x310cfcu: goto label_310cfc;
        case 0x310d00u: goto label_310d00;
        case 0x310d04u: goto label_310d04;
        case 0x310d08u: goto label_310d08;
        case 0x310d0cu: goto label_310d0c;
        case 0x310d10u: goto label_310d10;
        case 0x310d14u: goto label_310d14;
        case 0x310d18u: goto label_310d18;
        case 0x310d1cu: goto label_310d1c;
        case 0x310d20u: goto label_310d20;
        case 0x310d24u: goto label_310d24;
        case 0x310d28u: goto label_310d28;
        case 0x310d2cu: goto label_310d2c;
        case 0x310d30u: goto label_310d30;
        case 0x310d34u: goto label_310d34;
        case 0x310d38u: goto label_310d38;
        case 0x310d3cu: goto label_310d3c;
        case 0x310d40u: goto label_310d40;
        case 0x310d44u: goto label_310d44;
        case 0x310d48u: goto label_310d48;
        case 0x310d4cu: goto label_310d4c;
        case 0x310d50u: goto label_310d50;
        case 0x310d54u: goto label_310d54;
        case 0x310d58u: goto label_310d58;
        case 0x310d5cu: goto label_310d5c;
        case 0x310d60u: goto label_310d60;
        case 0x310d64u: goto label_310d64;
        case 0x310d68u: goto label_310d68;
        case 0x310d6cu: goto label_310d6c;
        case 0x310d70u: goto label_310d70;
        case 0x310d74u: goto label_310d74;
        case 0x310d78u: goto label_310d78;
        case 0x310d7cu: goto label_310d7c;
        case 0x310d80u: goto label_310d80;
        case 0x310d84u: goto label_310d84;
        case 0x310d88u: goto label_310d88;
        case 0x310d8cu: goto label_310d8c;
        case 0x310d90u: goto label_310d90;
        case 0x310d94u: goto label_310d94;
        case 0x310d98u: goto label_310d98;
        case 0x310d9cu: goto label_310d9c;
        case 0x310da0u: goto label_310da0;
        case 0x310da4u: goto label_310da4;
        case 0x310da8u: goto label_310da8;
        case 0x310dacu: goto label_310dac;
        case 0x310db0u: goto label_310db0;
        case 0x310db4u: goto label_310db4;
        case 0x310db8u: goto label_310db8;
        case 0x310dbcu: goto label_310dbc;
        case 0x310dc0u: goto label_310dc0;
        case 0x310dc4u: goto label_310dc4;
        case 0x310dc8u: goto label_310dc8;
        case 0x310dccu: goto label_310dcc;
        case 0x310dd0u: goto label_310dd0;
        case 0x310dd4u: goto label_310dd4;
        case 0x310dd8u: goto label_310dd8;
        case 0x310ddcu: goto label_310ddc;
        case 0x310de0u: goto label_310de0;
        case 0x310de4u: goto label_310de4;
        case 0x310de8u: goto label_310de8;
        case 0x310decu: goto label_310dec;
        case 0x310df0u: goto label_310df0;
        case 0x310df4u: goto label_310df4;
        case 0x310df8u: goto label_310df8;
        case 0x310dfcu: goto label_310dfc;
        case 0x310e00u: goto label_310e00;
        case 0x310e04u: goto label_310e04;
        case 0x310e08u: goto label_310e08;
        case 0x310e0cu: goto label_310e0c;
        case 0x310e10u: goto label_310e10;
        case 0x310e14u: goto label_310e14;
        case 0x310e18u: goto label_310e18;
        case 0x310e1cu: goto label_310e1c;
        case 0x310e20u: goto label_310e20;
        case 0x310e24u: goto label_310e24;
        case 0x310e28u: goto label_310e28;
        case 0x310e2cu: goto label_310e2c;
        case 0x310e30u: goto label_310e30;
        case 0x310e34u: goto label_310e34;
        case 0x310e38u: goto label_310e38;
        case 0x310e3cu: goto label_310e3c;
        case 0x310e40u: goto label_310e40;
        case 0x310e44u: goto label_310e44;
        case 0x310e48u: goto label_310e48;
        case 0x310e4cu: goto label_310e4c;
        case 0x310e50u: goto label_310e50;
        case 0x310e54u: goto label_310e54;
        case 0x310e58u: goto label_310e58;
        case 0x310e5cu: goto label_310e5c;
        case 0x310e60u: goto label_310e60;
        case 0x310e64u: goto label_310e64;
        case 0x310e68u: goto label_310e68;
        case 0x310e6cu: goto label_310e6c;
        case 0x310e70u: goto label_310e70;
        case 0x310e74u: goto label_310e74;
        case 0x310e78u: goto label_310e78;
        case 0x310e7cu: goto label_310e7c;
        case 0x310e80u: goto label_310e80;
        case 0x310e84u: goto label_310e84;
        case 0x310e88u: goto label_310e88;
        case 0x310e8cu: goto label_310e8c;
        case 0x310e90u: goto label_310e90;
        case 0x310e94u: goto label_310e94;
        case 0x310e98u: goto label_310e98;
        case 0x310e9cu: goto label_310e9c;
        case 0x310ea0u: goto label_310ea0;
        case 0x310ea4u: goto label_310ea4;
        case 0x310ea8u: goto label_310ea8;
        case 0x310eacu: goto label_310eac;
        case 0x310eb0u: goto label_310eb0;
        case 0x310eb4u: goto label_310eb4;
        case 0x310eb8u: goto label_310eb8;
        case 0x310ebcu: goto label_310ebc;
        case 0x310ec0u: goto label_310ec0;
        case 0x310ec4u: goto label_310ec4;
        case 0x310ec8u: goto label_310ec8;
        case 0x310eccu: goto label_310ecc;
        case 0x310ed0u: goto label_310ed0;
        case 0x310ed4u: goto label_310ed4;
        case 0x310ed8u: goto label_310ed8;
        case 0x310edcu: goto label_310edc;
        case 0x310ee0u: goto label_310ee0;
        case 0x310ee4u: goto label_310ee4;
        case 0x310ee8u: goto label_310ee8;
        case 0x310eecu: goto label_310eec;
        case 0x310ef0u: goto label_310ef0;
        case 0x310ef4u: goto label_310ef4;
        case 0x310ef8u: goto label_310ef8;
        case 0x310efcu: goto label_310efc;
        case 0x310f00u: goto label_310f00;
        case 0x310f04u: goto label_310f04;
        case 0x310f08u: goto label_310f08;
        case 0x310f0cu: goto label_310f0c;
        case 0x310f10u: goto label_310f10;
        case 0x310f14u: goto label_310f14;
        case 0x310f18u: goto label_310f18;
        case 0x310f1cu: goto label_310f1c;
        case 0x310f20u: goto label_310f20;
        case 0x310f24u: goto label_310f24;
        case 0x310f28u: goto label_310f28;
        case 0x310f2cu: goto label_310f2c;
        case 0x310f30u: goto label_310f30;
        case 0x310f34u: goto label_310f34;
        case 0x310f38u: goto label_310f38;
        case 0x310f3cu: goto label_310f3c;
        case 0x310f40u: goto label_310f40;
        case 0x310f44u: goto label_310f44;
        case 0x310f48u: goto label_310f48;
        case 0x310f4cu: goto label_310f4c;
        case 0x310f50u: goto label_310f50;
        case 0x310f54u: goto label_310f54;
        case 0x310f58u: goto label_310f58;
        case 0x310f5cu: goto label_310f5c;
        case 0x310f60u: goto label_310f60;
        case 0x310f64u: goto label_310f64;
        case 0x310f68u: goto label_310f68;
        case 0x310f6cu: goto label_310f6c;
        case 0x310f70u: goto label_310f70;
        case 0x310f74u: goto label_310f74;
        case 0x310f78u: goto label_310f78;
        case 0x310f7cu: goto label_310f7c;
        case 0x310f80u: goto label_310f80;
        case 0x310f84u: goto label_310f84;
        case 0x310f88u: goto label_310f88;
        case 0x310f8cu: goto label_310f8c;
        case 0x310f90u: goto label_310f90;
        case 0x310f94u: goto label_310f94;
        case 0x310f98u: goto label_310f98;
        case 0x310f9cu: goto label_310f9c;
        case 0x310fa0u: goto label_310fa0;
        case 0x310fa4u: goto label_310fa4;
        case 0x310fa8u: goto label_310fa8;
        case 0x310facu: goto label_310fac;
        case 0x310fb0u: goto label_310fb0;
        case 0x310fb4u: goto label_310fb4;
        case 0x310fb8u: goto label_310fb8;
        case 0x310fbcu: goto label_310fbc;
        case 0x310fc0u: goto label_310fc0;
        case 0x310fc4u: goto label_310fc4;
        case 0x310fc8u: goto label_310fc8;
        case 0x310fccu: goto label_310fcc;
        case 0x310fd0u: goto label_310fd0;
        case 0x310fd4u: goto label_310fd4;
        case 0x310fd8u: goto label_310fd8;
        case 0x310fdcu: goto label_310fdc;
        case 0x310fe0u: goto label_310fe0;
        case 0x310fe4u: goto label_310fe4;
        case 0x310fe8u: goto label_310fe8;
        case 0x310fecu: goto label_310fec;
        case 0x310ff0u: goto label_310ff0;
        case 0x310ff4u: goto label_310ff4;
        case 0x310ff8u: goto label_310ff8;
        case 0x310ffcu: goto label_310ffc;
        case 0x311000u: goto label_311000;
        case 0x311004u: goto label_311004;
        case 0x311008u: goto label_311008;
        case 0x31100cu: goto label_31100c;
        case 0x311010u: goto label_311010;
        case 0x311014u: goto label_311014;
        case 0x311018u: goto label_311018;
        case 0x31101cu: goto label_31101c;
        case 0x311020u: goto label_311020;
        case 0x311024u: goto label_311024;
        case 0x311028u: goto label_311028;
        case 0x31102cu: goto label_31102c;
        case 0x311030u: goto label_311030;
        case 0x311034u: goto label_311034;
        case 0x311038u: goto label_311038;
        case 0x31103cu: goto label_31103c;
        case 0x311040u: goto label_311040;
        case 0x311044u: goto label_311044;
        case 0x311048u: goto label_311048;
        case 0x31104cu: goto label_31104c;
        case 0x311050u: goto label_311050;
        case 0x311054u: goto label_311054;
        case 0x311058u: goto label_311058;
        case 0x31105cu: goto label_31105c;
        case 0x311060u: goto label_311060;
        case 0x311064u: goto label_311064;
        case 0x311068u: goto label_311068;
        default: break;
    }

    ctx->pc = 0x310cc0u;

label_310cc0:
    // 0x310cc0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x310cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_310cc4:
    // 0x310cc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x310cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_310cc8:
    // 0x310cc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x310cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_310ccc:
    // 0x310ccc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x310cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_310cd0:
    // 0x310cd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x310cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_310cd4:
    // 0x310cd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_310cd8:
    // 0x310cd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x310cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_310cdc:
    // 0x310cdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x310cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_310ce0:
    // 0x310ce0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x310ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_310ce4:
    // 0x310ce4: 0x8f82a25c  lw          $v0, -0x5DA4($gp)
    ctx->pc = 0x310ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
label_310ce8:
    // 0x310ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_310cec:
    if (ctx->pc == 0x310CECu) {
        ctx->pc = 0x310CECu;
            // 0x310cec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310CF0u;
        goto label_310cf0;
    }
    ctx->pc = 0x310CE8u;
    {
        const bool branch_taken_0x310ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310CE8u;
            // 0x310cec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ce8) {
            ctx->pc = 0x310CF8u;
            goto label_310cf8;
        }
    }
    ctx->pc = 0x310CF0u;
label_310cf0:
    // 0x310cf0: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_310cf4:
    if (ctx->pc == 0x310CF4u) {
        ctx->pc = 0x310CF4u;
            // 0x310cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310CF8u;
        goto label_310cf8;
    }
    ctx->pc = 0x310CF0u;
    {
        const bool branch_taken_0x310cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310CF0u;
            // 0x310cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cf0) {
            ctx->pc = 0x31104Cu;
            goto label_31104c;
        }
    }
    ctx->pc = 0x310CF8u;
label_310cf8:
    // 0x310cf8: 0xc0a0ed8  jal         func_283B60
label_310cfc:
    if (ctx->pc == 0x310CFCu) {
        ctx->pc = 0x310CFCu;
            // 0x310cfc: 0x8e652e50  lw          $a1, 0x2E50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11856)));
        ctx->pc = 0x310D00u;
        goto label_310d00;
    }
    ctx->pc = 0x310CF8u;
    SET_GPR_U32(ctx, 31, 0x310D00u);
    ctx->pc = 0x310CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310CF8u;
            // 0x310cfc: 0x8e652e50  lw          $a1, 0x2E50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D00u; }
        if (ctx->pc != 0x310D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D00u; }
        if (ctx->pc != 0x310D00u) { return; }
    }
    ctx->pc = 0x310D00u;
label_310d00:
    // 0x310d00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x310d00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_310d04:
    // 0x310d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310d08:
    // 0x310d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310d0c:
    // 0x310d0c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x310d0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_310d10:
    // 0x310d10: 0x320f809  jalr        $t9
label_310d14:
    if (ctx->pc == 0x310D14u) {
        ctx->pc = 0x310D14u;
            // 0x310d14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x310D18u;
        goto label_310d18;
    }
    ctx->pc = 0x310D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310D18u);
        ctx->pc = 0x310D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310D10u;
            // 0x310d14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x310D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310D18u; }
            if (ctx->pc != 0x310D18u) { return; }
        }
        }
    }
    ctx->pc = 0x310D18u;
label_310d18:
    // 0x310d18: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x310d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310d1c:
    // 0x310d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x310d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310d20:
    // 0x310d20: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x310d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_310d24:
    // 0x310d24: 0x320f809  jalr        $t9
label_310d28:
    if (ctx->pc == 0x310D28u) {
        ctx->pc = 0x310D28u;
            // 0x310d28: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x310D2Cu;
        goto label_310d2c;
    }
    ctx->pc = 0x310D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x310D2Cu);
        ctx->pc = 0x310D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310D24u;
            // 0x310d28: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x310D2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x310D2Cu; }
            if (ctx->pc != 0x310D2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x310D2Cu;
label_310d2c:
    // 0x310d2c: 0xc04c050  jal         func_130140
label_310d30:
    if (ctx->pc == 0x310D30u) {
        ctx->pc = 0x310D30u;
            // 0x310d30: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x310D34u;
        goto label_310d34;
    }
    ctx->pc = 0x310D2Cu;
    SET_GPR_U32(ctx, 31, 0x310D34u);
    ctx->pc = 0x310D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310D2Cu;
            // 0x310d30: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D34u; }
        if (ctx->pc != 0x310D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D34u; }
        if (ctx->pc != 0x310D34u) { return; }
    }
    ctx->pc = 0x310D34u;
label_310d34:
    // 0x310d34: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x310d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_310d38:
    // 0x310d38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x310d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_310d3c:
    // 0x310d3c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x310d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310d40:
    // 0x310d40: 0xc041cf6  jal         func_1073D8
label_310d44:
    if (ctx->pc == 0x310D44u) {
        ctx->pc = 0x310D44u;
            // 0x310d44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x310D48u;
        goto label_310d48;
    }
    ctx->pc = 0x310D40u;
    SET_GPR_U32(ctx, 31, 0x310D48u);
    ctx->pc = 0x310D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310D40u;
            // 0x310d44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D48u; }
        if (ctx->pc != 0x310D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D48u; }
        if (ctx->pc != 0x310D48u) { return; }
    }
    ctx->pc = 0x310D48u;
label_310d48:
    // 0x310d48: 0xc04c3b8  jal         func_130EE0
label_310d4c:
    if (ctx->pc == 0x310D4Cu) {
        ctx->pc = 0x310D50u;
        goto label_310d50;
    }
    ctx->pc = 0x310D48u;
    SET_GPR_U32(ctx, 31, 0x310D50u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D50u; }
        if (ctx->pc != 0x310D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310D50u; }
        if (ctx->pc != 0x310D50u) { return; }
    }
    ctx->pc = 0x310D50u;
label_310d50:
    // 0x310d50: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x310d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_310d54:
    // 0x310d54: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x310d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_310d58:
    // 0x310d58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x310d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_310d5c:
    // 0x310d5c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x310d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_310d60:
    // 0x310d60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_310d64:
    // 0x310d64: 0x0  nop
    ctx->pc = 0x310d64u;
    // NOP
label_310d68:
    // 0x310d68: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x310d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_310d6c:
    // 0x310d6c: 0x8f82a27c  lw          $v0, -0x5D84($gp)
    ctx->pc = 0x310d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
label_310d70:
    // 0x310d70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x310d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310d74:
    // 0x310d74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x310d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_310d78:
    // 0x310d78: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
label_310d7c:
    if (ctx->pc == 0x310D7Cu) {
        ctx->pc = 0x310D7Cu;
            // 0x310d7c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x310D80u;
        goto label_310d80;
    }
    ctx->pc = 0x310D78u;
    {
        const bool branch_taken_0x310d78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x310D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310D78u;
            // 0x310d7c: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d78) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310D80u;
label_310d80:
    // 0x310d80: 0x8f82a278  lw          $v0, -0x5D88($gp)
    ctx->pc = 0x310d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943352)));
label_310d84:
    // 0x310d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_310d88:
    // 0x310d88: 0xaf82a278  sw          $v0, -0x5D88($gp)
    ctx->pc = 0x310d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943352), GPR_U32(ctx, 2));
label_310d8c:
    // 0x310d8c: 0x8f82a278  lw          $v0, -0x5D88($gp)
    ctx->pc = 0x310d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943352)));
label_310d90:
    // 0x310d90: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
label_310d94:
    if (ctx->pc == 0x310D94u) {
        ctx->pc = 0x310D94u;
            // 0x310d94: 0xaf80a27c  sw          $zero, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
        ctx->pc = 0x310D98u;
        goto label_310d98;
    }
    ctx->pc = 0x310D90u;
    {
        const bool branch_taken_0x310d90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x310D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310D90u;
            // 0x310d94: 0xaf80a27c  sw          $zero, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d90) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310D98u;
label_310d98:
    // 0x310d98: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x310d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_310d9c:
    // 0x310d9c: 0xc04a0ea  jal         func_1283A8
label_310da0:
    if (ctx->pc == 0x310DA0u) {
        ctx->pc = 0x310DA0u;
            // 0x310da0: 0xaf82a27c  sw          $v0, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 2));
        ctx->pc = 0x310DA4u;
        goto label_310da4;
    }
    ctx->pc = 0x310D9Cu;
    SET_GPR_U32(ctx, 31, 0x310DA4u);
    ctx->pc = 0x310DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310D9Cu;
            // 0x310da0: 0xaf82a27c  sw          $v0, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DA4u; }
        if (ctx->pc != 0x310DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DA4u; }
        if (ctx->pc != 0x310DA4u) { return; }
    }
    ctx->pc = 0x310DA4u;
label_310da4:
    // 0x310da4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_310da8:
    if (ctx->pc == 0x310DA8u) {
        ctx->pc = 0x310DA8u;
            // 0x310da8: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x310DACu;
        goto label_310dac;
    }
    ctx->pc = 0x310DA4u;
    {
        const bool branch_taken_0x310da4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x310DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310DA4u;
            // 0x310da8: 0x30430001  andi        $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310da4) {
            ctx->pc = 0x310DB8u;
            goto label_310db8;
        }
    }
    ctx->pc = 0x310DACu;
label_310dac:
    // 0x310dac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_310db0:
    if (ctx->pc == 0x310DB0u) {
        ctx->pc = 0x310DB4u;
        goto label_310db4;
    }
    ctx->pc = 0x310DACu;
    {
        const bool branch_taken_0x310dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x310dac) {
            ctx->pc = 0x310DB8u;
            goto label_310db8;
        }
    }
    ctx->pc = 0x310DB4u;
label_310db4:
    // 0x310db4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x310db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_310db8:
    // 0x310db8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_310dbc:
    if (ctx->pc == 0x310DBCu) {
        ctx->pc = 0x310DBCu;
            // 0x310dbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x310DC0u;
        goto label_310dc0;
    }
    ctx->pc = 0x310DB8u;
    {
        const bool branch_taken_0x310db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310DB8u;
            // 0x310dbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310db8) {
            ctx->pc = 0x310DCCu;
            goto label_310dcc;
        }
    }
    ctx->pc = 0x310DC0u;
label_310dc0:
    // 0x310dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310dc4:
    // 0x310dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_310dc8:
    if (ctx->pc == 0x310DC8u) {
        ctx->pc = 0x310DC8u;
            // 0x310dc8: 0xaf82a280  sw          $v0, -0x5D80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943360), GPR_U32(ctx, 2));
        ctx->pc = 0x310DCCu;
        goto label_310dcc;
    }
    ctx->pc = 0x310DC4u;
    {
        const bool branch_taken_0x310dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310DC4u;
            // 0x310dc8: 0xaf82a280  sw          $v0, -0x5D80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dc4) {
            ctx->pc = 0x310DD0u;
            goto label_310dd0;
        }
    }
    ctx->pc = 0x310DCCu;
label_310dcc:
    // 0x310dcc: 0xaf82a280  sw          $v0, -0x5D80($gp)
    ctx->pc = 0x310dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943360), GPR_U32(ctx, 2));
label_310dd0:
    // 0x310dd0: 0x8f82a27c  lw          $v0, -0x5D84($gp)
    ctx->pc = 0x310dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
label_310dd4:
    // 0x310dd4: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_310dd8:
    if (ctx->pc == 0x310DD8u) {
        ctx->pc = 0x310DD8u;
            // 0x310dd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x310DDCu;
        goto label_310ddc;
    }
    ctx->pc = 0x310DD4u;
    {
        const bool branch_taken_0x310dd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x310DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310DD4u;
            // 0x310dd8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dd4) {
            ctx->pc = 0x310E6Cu;
            goto label_310e6c;
        }
    }
    ctx->pc = 0x310DDCu;
label_310ddc:
    // 0x310ddc: 0x8f82a280  lw          $v0, -0x5D80($gp)
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943360)));
label_310de0:
    // 0x310de0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_310de4:
    if (ctx->pc == 0x310DE4u) {
        ctx->pc = 0x310DE8u;
        goto label_310de8;
    }
    ctx->pc = 0x310DE0u;
    {
        const bool branch_taken_0x310de0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x310de0) {
            ctx->pc = 0x310E0Cu;
            goto label_310e0c;
        }
    }
    ctx->pc = 0x310DE8u;
label_310de8:
    // 0x310de8: 0xc04c3b8  jal         func_130EE0
label_310dec:
    if (ctx->pc == 0x310DECu) {
        ctx->pc = 0x310DF0u;
        goto label_310df0;
    }
    ctx->pc = 0x310DE8u;
    SET_GPR_U32(ctx, 31, 0x310DF0u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DF0u; }
        if (ctx->pc != 0x310DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310DF0u; }
        if (ctx->pc != 0x310DF0u) { return; }
    }
    ctx->pc = 0x310DF0u;
label_310df0:
    // 0x310df0: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x310df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_310df4:
    // 0x310df4: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x310df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_310df8:
    // 0x310df8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_310dfc:
    // 0x310dfc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x310dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310e00:
    // 0x310e00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x310e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_310e04:
    // 0x310e04: 0x10000009  b           . + 4 + (0x9 << 2)
label_310e08:
    if (ctx->pc == 0x310E08u) {
        ctx->pc = 0x310E08u;
            // 0x310e08: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x310E0Cu;
        goto label_310e0c;
    }
    ctx->pc = 0x310E04u;
    {
        const bool branch_taken_0x310e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310E04u;
            // 0x310e08: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e04) {
            ctx->pc = 0x310E2Cu;
            goto label_310e2c;
        }
    }
    ctx->pc = 0x310E0Cu;
label_310e0c:
    // 0x310e0c: 0xc04c3b8  jal         func_130EE0
label_310e10:
    if (ctx->pc == 0x310E10u) {
        ctx->pc = 0x310E14u;
        goto label_310e14;
    }
    ctx->pc = 0x310E0Cu;
    SET_GPR_U32(ctx, 31, 0x310E14u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E14u; }
        if (ctx->pc != 0x310E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E14u; }
        if (ctx->pc != 0x310E14u) { return; }
    }
    ctx->pc = 0x310E14u;
label_310e14:
    // 0x310e14: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x310e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_310e18:
    // 0x310e18: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x310e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_310e1c:
    // 0x310e1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x310e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_310e20:
    // 0x310e20: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x310e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310e24:
    // 0x310e24: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x310e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_310e28:
    // 0x310e28: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x310e28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_310e2c:
    // 0x310e2c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_310e30:
    // 0x310e30: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x310e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_310e34:
    // 0x310e34: 0xc0c4088  jal         func_310220
label_310e38:
    if (ctx->pc == 0x310E38u) {
        ctx->pc = 0x310E38u;
            // 0x310e38: 0x2484f930  addiu       $a0, $a0, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965552));
        ctx->pc = 0x310E3Cu;
        goto label_310e3c;
    }
    ctx->pc = 0x310E34u;
    SET_GPR_U32(ctx, 31, 0x310E3Cu);
    ctx->pc = 0x310E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310E34u;
            // 0x310e38: 0x2484f930  addiu       $a0, $a0, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310220u;
    if (runtime->hasFunction(0x310220u)) {
        auto targetFn = runtime->lookupFunction(0x310220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E3Cu; }
        if (ctx->pc != 0x310E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUkiPos__FPfPf_0x310220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E3Cu; }
        if (ctx->pc != 0x310E3Cu) { return; }
    }
    ctx->pc = 0x310E3Cu;
label_310e3c:
    // 0x310e3c: 0x8f82a27c  lw          $v0, -0x5D84($gp)
    ctx->pc = 0x310e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
label_310e40:
    // 0x310e40: 0xc780a244  lwc1        $f0, -0x5DBC($gp)
    ctx->pc = 0x310e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310e44:
    // 0x310e44: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310e48:
    // 0x310e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_310e4c:
    // 0x310e4c: 0xaf82a27c  sw          $v0, -0x5D84($gp)
    ctx->pc = 0x310e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 2));
label_310e50:
    // 0x310e50: 0x8f82a27c  lw          $v0, -0x5D84($gp)
    ctx->pc = 0x310e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
label_310e54:
    // 0x310e54: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_310e58:
    if (ctx->pc == 0x310E58u) {
        ctx->pc = 0x310E58u;
            // 0x310e58: 0xe420f934  swc1        $f0, -0x6CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965556), bits); }
        ctx->pc = 0x310E5Cu;
        goto label_310e5c;
    }
    ctx->pc = 0x310E54u;
    {
        const bool branch_taken_0x310e54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x310E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310E54u;
            // 0x310e58: 0xe420f934  swc1        $f0, -0x6CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294965556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e54) {
            ctx->pc = 0x310E68u;
            goto label_310e68;
        }
    }
    ctx->pc = 0x310E5Cu;
label_310e5c:
    // 0x310e5c: 0xc0c42d8  jal         func_310B60
label_310e60:
    if (ctx->pc == 0x310E60u) {
        ctx->pc = 0x310E60u;
            // 0x310e60: 0xaf80a27c  sw          $zero, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
        ctx->pc = 0x310E64u;
        goto label_310e64;
    }
    ctx->pc = 0x310E5Cu;
    SET_GPR_U32(ctx, 31, 0x310E64u);
    ctx->pc = 0x310E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310E5Cu;
            // 0x310e60: 0xaf80a27c  sw          $zero, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310B60u;
    if (runtime->hasFunction(0x310B60u)) {
        auto targetFn = runtime->lookupFunction(0x310B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E64u; }
        if (ctx->pc != 0x310E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextChanceCnt__Fv_0x310b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E64u; }
        if (ctx->pc != 0x310E64u) { return; }
    }
    ctx->pc = 0x310E64u;
label_310e64:
    // 0x310e64: 0xaf82a278  sw          $v0, -0x5D88($gp)
    ctx->pc = 0x310e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943352), GPR_U32(ctx, 2));
label_310e68:
    // 0x310e68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x310e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_310e6c:
    // 0x310e6c: 0xc04c374  jal         func_130DD0
label_310e70:
    if (ctx->pc == 0x310E70u) {
        ctx->pc = 0x310E74u;
        goto label_310e74;
    }
    ctx->pc = 0x310E6Cu;
    SET_GPR_U32(ctx, 31, 0x310E74u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E74u; }
        if (ctx->pc != 0x310E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E74u; }
        if (ctx->pc != 0x310E74u) { return; }
    }
    ctx->pc = 0x310E74u;
label_310e74:
    // 0x310e74: 0xc78ca274  lwc1        $f12, -0x5D8C($gp)
    ctx->pc = 0x310e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310e78:
    // 0x310e78: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x310e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_310e7c:
    // 0x310e7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x310e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_310e80:
    // 0x310e80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x310e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310e84:
    // 0x310e84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x310e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_310e88:
    // 0x310e88: 0xc04c2d8  jal         func_130B60
label_310e8c:
    if (ctx->pc == 0x310E8Cu) {
        ctx->pc = 0x310E8Cu;
            // 0x310e8c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x310E90u;
        goto label_310e90;
    }
    ctx->pc = 0x310E88u;
    SET_GPR_U32(ctx, 31, 0x310E90u);
    ctx->pc = 0x310E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310E88u;
            // 0x310e8c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E90u; }
        if (ctx->pc != 0x310E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310E90u; }
        if (ctx->pc != 0x310E90u) { return; }
    }
    ctx->pc = 0x310E90u;
label_310e90:
    // 0x310e90: 0xe780a274  swc1        $f0, -0x5D8C($gp)
    ctx->pc = 0x310e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943348), bits); }
label_310e94:
    // 0x310e94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x310e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_310e98:
    // 0x310e98: 0xc78ca274  lwc1        $f12, -0x5D8C($gp)
    ctx->pc = 0x310e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310e9c:
    // 0x310e9c: 0xc047a42  jal         func_11E908
label_310ea0:
    if (ctx->pc == 0x310EA0u) {
        ctx->pc = 0x310EA0u;
            // 0x310ea0: 0xaf82a270  sw          $v0, -0x5D90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 2));
        ctx->pc = 0x310EA4u;
        goto label_310ea4;
    }
    ctx->pc = 0x310E9Cu;
    SET_GPR_U32(ctx, 31, 0x310EA4u);
    ctx->pc = 0x310EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310E9Cu;
            // 0x310ea0: 0xaf82a270  sw          $v0, -0x5D90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EA4u; }
        if (ctx->pc != 0x310EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EA4u; }
        if (ctx->pc != 0x310EA4u) { return; }
    }
    ctx->pc = 0x310EA4u;
label_310ea4:
    // 0x310ea4: 0xc781a270  lwc1        $f1, -0x5D90($gp)
    ctx->pc = 0x310ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310ea8:
    // 0x310ea8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310eac:
    // 0x310eac: 0xc78ca274  lwc1        $f12, -0x5D8C($gp)
    ctx->pc = 0x310eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_310eb0:
    // 0x310eb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x310eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_310eb4:
    // 0x310eb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x310eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_310eb8:
    // 0x310eb8: 0xc047964  jal         func_11E590
label_310ebc:
    if (ctx->pc == 0x310EBCu) {
        ctx->pc = 0x310EBCu;
            // 0x310ebc: 0xe420ed80  swc1        $f0, -0x1280($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962560), bits); }
        ctx->pc = 0x310EC0u;
        goto label_310ec0;
    }
    ctx->pc = 0x310EB8u;
    SET_GPR_U32(ctx, 31, 0x310EC0u);
    ctx->pc = 0x310EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310EB8u;
            // 0x310ebc: 0xe420ed80  swc1        $f0, -0x1280($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962560), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EC0u; }
        if (ctx->pc != 0x310EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310EC0u; }
        if (ctx->pc != 0x310EC0u) { return; }
    }
    ctx->pc = 0x310EC0u;
label_310ec0:
    // 0x310ec0: 0xc782a270  lwc1        $f2, -0x5D90($gp)
    ctx->pc = 0x310ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310ec4:
    // 0x310ec4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x310ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_310ec8:
    // 0x310ec8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x310ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_310ecc:
    // 0x310ecc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310ed0:
    // 0x310ed0: 0xac20ed84  sw          $zero, -0x127C($at)
    ctx->pc = 0x310ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962564), GPR_U32(ctx, 0));
label_310ed4:
    // 0x310ed4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x310ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310ed8:
    // 0x310ed8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x310ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_310edc:
    // 0x310edc: 0x3c0801f6  lui         $t0, 0x1F6
    ctx->pc = 0x310edcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)502 << 16));
label_310ee0:
    // 0x310ee0: 0xc781a244  lwc1        $f1, -0x5DBC($gp)
    ctx->pc = 0x310ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310ee4:
    // 0x310ee4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310ee8:
    // 0x310ee8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x310ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_310eec:
    // 0x310eec: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x310eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_310ef0:
    // 0x310ef0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x310ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_310ef4:
    // 0x310ef4: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x310ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_310ef8:
    // 0x310ef8: 0x27b100e8  addiu       $s1, $sp, 0xE8
    ctx->pc = 0x310ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_310efc:
    // 0x310efc: 0x2508ed60  addiu       $t0, $t0, -0x12A0
    ctx->pc = 0x310efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962528));
label_310f00:
    // 0x310f00: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x310f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_310f04:
    // 0x310f04: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x310f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_310f08:
    // 0x310f08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x310f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310f0c:
    // 0x310f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x310f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310f10:
    // 0x310f10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x310f10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_310f14:
    // 0x310f14: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x310f14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_310f18:
    // 0x310f18: 0xe422ed88  swc1        $f2, -0x1278($at)
    ctx->pc = 0x310f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962568), bits); }
label_310f1c:
    // 0x310f1c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f20:
    // 0x310f20: 0xe420ed64  swc1        $f0, -0x129C($at)
    ctx->pc = 0x310f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962532), bits); }
label_310f24:
    // 0x310f24: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x310f24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_310f28:
    // 0x310f28: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f2c:
    // 0x310f2c: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x310f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
label_310f30:
    // 0x310f30: 0xc424ed60  lwc1        $f4, -0x12A0($at)
    ctx->pc = 0x310f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_310f34:
    // 0x310f34: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f38:
    // 0x310f38: 0xc423ed80  lwc1        $f3, -0x1280($at)
    ctx->pc = 0x310f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_310f3c:
    // 0x310f3c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f40:
    // 0x310f40: 0xc422ed64  lwc1        $f2, -0x129C($at)
    ctx->pc = 0x310f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310f44:
    // 0x310f44: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x310f44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_310f48:
    // 0x310f48: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x310f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_310f4c:
    // 0x310f4c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f50:
    // 0x310f50: 0xc421ed68  lwc1        $f1, -0x1298($at)
    ctx->pc = 0x310f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310f54:
    // 0x310f54: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x310f54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_310f58:
    // 0x310f58: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x310f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_310f5c:
    // 0x310f5c: 0xc420ed88  lwc1        $f0, -0x1278($at)
    ctx->pc = 0x310f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310f60:
    // 0x310f60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x310f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_310f64:
    // 0x310f64: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x310f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_310f68:
    // 0x310f68: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x310f68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_310f6c:
    // 0x310f6c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x310f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_310f70:
    // 0x310f70: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x310f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_310f74:
    // 0x310f74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x310f74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_310f78:
    // 0x310f78: 0xc7a500f0  lwc1        $f5, 0xF0($sp)
    ctx->pc = 0x310f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_310f7c:
    // 0x310f7c: 0xc7a40100  lwc1        $f4, 0x100($sp)
    ctx->pc = 0x310f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_310f80:
    // 0x310f80: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x310f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_310f84:
    // 0x310f84: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x310f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310f88:
    // 0x310f88: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x310f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_310f8c:
    // 0x310f8c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x310f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_310f90:
    // 0x310f90: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x310f90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_310f94:
    // 0x310f94: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x310f94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_310f98:
    // 0x310f98: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x310f98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_310f9c:
    // 0x310f9c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x310f9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_310fa0:
    // 0x310fa0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x310fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_310fa4:
    // 0x310fa4: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x310fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_310fa8:
    // 0x310fa8: 0xe7a500f0  swc1        $f5, 0xF0($sp)
    ctx->pc = 0x310fa8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_310fac:
    // 0x310fac: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x310facu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_310fb0:
    // 0x310fb0: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x310fb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_310fb4:
    // 0x310fb4: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x310fb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_310fb8:
    // 0x310fb8: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x310fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_310fbc:
    // 0x310fbc: 0xc0b1ed4  jal         func_2C7B50
label_310fc0:
    if (ctx->pc == 0x310FC0u) {
        ctx->pc = 0x310FC0u;
            // 0x310fc0: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->pc = 0x310FC4u;
        goto label_310fc4;
    }
    ctx->pc = 0x310FBCu;
    SET_GPR_U32(ctx, 31, 0x310FC4u);
    ctx->pc = 0x310FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310FBCu;
            // 0x310fc0: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FC4u; }
        if (ctx->pc != 0x310FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FC4u; }
        if (ctx->pc != 0x310FC4u) { return; }
    }
    ctx->pc = 0x310FC4u;
label_310fc4:
    // 0x310fc4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x310fc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310fc8:
    // 0x310fc8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x310fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_310fcc:
    // 0x310fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310fd0:
    // 0x310fd0: 0xc049c86  jal         func_127218
label_310fd4:
    if (ctx->pc == 0x310FD4u) {
        ctx->pc = 0x310FD4u;
            // 0x310fd4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x310FD8u;
        goto label_310fd8;
    }
    ctx->pc = 0x310FD0u;
    SET_GPR_U32(ctx, 31, 0x310FD8u);
    ctx->pc = 0x310FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310FD0u;
            // 0x310fd4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FD8u; }
        if (ctx->pc != 0x310FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310FD8u; }
        if (ctx->pc != 0x310FD8u) { return; }
    }
    ctx->pc = 0x310FD8u;
label_310fd8:
    // 0x310fd8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x310fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_310fdc:
    // 0x310fdc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_310fe0:
    // 0x310fe0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_310fe4:
    // 0x310fe4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x310fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_310fe8:
    // 0x310fe8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x310fe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310fec:
    // 0x310fec: 0x2484ed60  addiu       $a0, $a0, -0x12A0
    ctx->pc = 0x310fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962528));
label_310ff0:
    // 0x310ff0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x310ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_310ff4:
    // 0x310ff4: 0x24a5ed80  addiu       $a1, $a1, -0x1280
    ctx->pc = 0x310ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
label_310ff8:
    // 0x310ff8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_310ffc:
    // 0x310ffc: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x310ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_311000:
    // 0x311000: 0xc053d7c  jal         func_14F5F0
label_311004:
    if (ctx->pc == 0x311004u) {
        ctx->pc = 0x311004u;
            // 0x311004: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311008u;
        goto label_311008;
    }
    ctx->pc = 0x311000u;
    SET_GPR_U32(ctx, 31, 0x311008u);
    ctx->pc = 0x311004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311000u;
            // 0x311004: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311008u; }
        if (ctx->pc != 0x311008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311008u; }
        if (ctx->pc != 0x311008u) { return; }
    }
    ctx->pc = 0x311008u;
label_311008:
    // 0x311008: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x311008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_31100c:
    // 0x31100c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_311010:
    // 0x311010: 0xc041c3e  jal         func_1070F8
label_311014:
    if (ctx->pc == 0x311014u) {
        ctx->pc = 0x311014u;
            // 0x311014: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x311018u;
        goto label_311018;
    }
    ctx->pc = 0x311010u;
    SET_GPR_U32(ctx, 31, 0x311018u);
    ctx->pc = 0x311014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311010u;
            // 0x311014: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311018u; }
        if (ctx->pc != 0x311018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311018u; }
        if (ctx->pc != 0x311018u) { return; }
    }
    ctx->pc = 0x311018u;
label_311018:
    // 0x311018: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x311018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_31101c:
    // 0x31101c: 0xc041be0  jal         func_106F80
label_311020:
    if (ctx->pc == 0x311020u) {
        ctx->pc = 0x311020u;
            // 0x311020: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x311024u;
        goto label_311024;
    }
    ctx->pc = 0x31101Cu;
    SET_GPR_U32(ctx, 31, 0x311024u);
    ctx->pc = 0x311020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31101Cu;
            // 0x311020: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311024u; }
        if (ctx->pc != 0x311024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311024u; }
        if (ctx->pc != 0x311024u) { return; }
    }
    ctx->pc = 0x311024u;
label_311024:
    // 0x311024: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x311024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_311028:
    // 0x311028: 0xc041bd6  jal         func_106F58
label_31102c:
    if (ctx->pc == 0x31102Cu) {
        ctx->pc = 0x31102Cu;
            // 0x31102c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x311030u;
        goto label_311030;
    }
    ctx->pc = 0x311028u;
    SET_GPR_U32(ctx, 31, 0x311030u);
    ctx->pc = 0x31102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x311028u;
            // 0x31102c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311030u; }
        if (ctx->pc != 0x311030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x311030u; }
        if (ctx->pc != 0x311030u) { return; }
    }
    ctx->pc = 0x311030u;
label_311030:
    // 0x311030: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x311030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311034:
    // 0x311034: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_311038:
    // 0x311038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x311038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31103c:
    // 0x31103c: 0xe420ed60  swc1        $f0, -0x12A0($at)
    ctx->pc = 0x31103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962528), bits); }
label_311040:
    // 0x311040: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x311040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_311044:
    // 0x311044: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x311044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_311048:
    // 0x311048: 0xe420ed68  swc1        $f0, -0x1298($at)
    ctx->pc = 0x311048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294962536), bits); }
label_31104c:
    // 0x31104c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x31104cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_311050:
    // 0x311050: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x311050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_311054:
    // 0x311054: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x311054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_311058:
    // 0x311058: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x311058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31105c:
    // 0x31105c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_311060:
    // 0x311060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x311060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_311064:
    // 0x311064: 0x3e00008  jr          $ra
label_311068:
    if (ctx->pc == 0x311068u) {
        ctx->pc = 0x311068u;
            // 0x311068: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x31106Cu;
        goto label_fallthrough_0x311064;
    }
    ctx->pc = 0x311064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x311064u;
            // 0x311068: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x311064:
    ctx->pc = 0x31106Cu;
}
