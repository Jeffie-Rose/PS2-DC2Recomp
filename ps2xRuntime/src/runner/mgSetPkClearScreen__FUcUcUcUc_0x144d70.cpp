#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkClearScreen__FUcUcUcUc
// Address: 0x144d70 - 0x145068
void mgSetPkClearScreen__FUcUcUcUc_0x144d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkClearScreen__FUcUcUcUc_0x144d70");
#endif

    switch (ctx->pc) {
        case 0x144dacu: goto label_144dac;
        case 0x144db8u: goto label_144db8;
        case 0x144dccu: goto label_144dcc;
        case 0x144ddcu: goto label_144ddc;
        case 0x144de4u: goto label_144de4;
        case 0x144decu: goto label_144dec;
        case 0x144df8u: goto label_144df8;
        case 0x144e04u: goto label_144e04;
        case 0x144e18u: goto label_144e18;
        case 0x144e94u: goto label_144e94;
        case 0x144ec8u: goto label_144ec8;
        case 0x144f48u: goto label_144f48;
        case 0x144f58u: goto label_144f58;
        case 0x144f68u: goto label_144f68;
        case 0x144f9cu: goto label_144f9c;
        case 0x144fa4u: goto label_144fa4;
        case 0x144fd4u: goto label_144fd4;
        case 0x145010u: goto label_145010;
        case 0x145038u: goto label_145038;
        case 0x145040u: goto label_145040;
        case 0x145048u: goto label_145048;
        default: break;
    }

    ctx->pc = 0x144d70u;

    // 0x144d70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144d74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x144d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x144d78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144d7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144d80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x144d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144d88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x144d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144d90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x144d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144d98: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x144d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d9c: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x144d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x144da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144da4: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x144DA4u;
    SET_GPR_U32(ctx, 31, 0x144DACu);
    ctx->pc = 0x144DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DA4u;
            // 0x144da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DACu; }
        if (ctx->pc != 0x144DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DACu; }
        if (ctx->pc != 0x144DACu) { return; }
    }
    ctx->pc = 0x144DACu;
label_144dac:
    // 0x144dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144db0: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x144DB0u;
    SET_GPR_U32(ctx, 31, 0x144DB8u);
    ctx->pc = 0x144DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DB0u;
            // 0x144db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DB8u; }
        if (ctx->pc != 0x144DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DB8u; }
        if (ctx->pc != 0x144DB8u) { return; }
    }
    ctx->pc = 0x144DB8u;
label_144db8:
    // 0x144db8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x144dbc: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x144dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x144dc0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x144dc0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144dc4: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x144DC4u;
    SET_GPR_U32(ctx, 31, 0x144DCCu);
    ctx->pc = 0x144DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DC4u;
            // 0x144dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DCCu; }
        if (ctx->pc != 0x144DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DCCu; }
        if (ctx->pc != 0x144DCCu) { return; }
    }
    ctx->pc = 0x144DCCu;
label_144dcc:
    // 0x144dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dd0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x144dd4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144DD4u;
    SET_GPR_U32(ctx, 31, 0x144DDCu);
    ctx->pc = 0x144DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DD4u;
            // 0x144dd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DDCu; }
        if (ctx->pc != 0x144DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DDCu; }
        if (ctx->pc != 0x144DDCu) { return; }
    }
    ctx->pc = 0x144DDCu;
label_144ddc:
    // 0x144ddc: 0xc041b54  jal         func_106D50
    ctx->pc = 0x144DDCu;
    SET_GPR_U32(ctx, 31, 0x144DE4u);
    ctx->pc = 0x144DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DDCu;
            // 0x144de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DE4u; }
        if (ctx->pc != 0x144DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DE4u; }
        if (ctx->pc != 0x144DE4u) { return; }
    }
    ctx->pc = 0x144DE4u;
label_144de4:
    // 0x144de4: 0xc041b42  jal         func_106D08
    ctx->pc = 0x144DE4u;
    SET_GPR_U32(ctx, 31, 0x144DECu);
    ctx->pc = 0x144DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DE4u;
            // 0x144de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DECu; }
        if (ctx->pc != 0x144DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DECu; }
        if (ctx->pc != 0x144DECu) { return; }
    }
    ctx->pc = 0x144DECu;
label_144dec:
    // 0x144dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144df0: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x144DF0u;
    SET_GPR_U32(ctx, 31, 0x144DF8u);
    ctx->pc = 0x144DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DF0u;
            // 0x144df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DF8u; }
        if (ctx->pc != 0x144DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DF8u; }
        if (ctx->pc != 0x144DF8u) { return; }
    }
    ctx->pc = 0x144DF8u;
label_144df8:
    // 0x144df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dfc: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x144DFCu;
    SET_GPR_U32(ctx, 31, 0x144E04u);
    ctx->pc = 0x144E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144DFCu;
            // 0x144e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E04u; }
        if (ctx->pc != 0x144E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E04u; }
        if (ctx->pc != 0x144E04u) { return; }
    }
    ctx->pc = 0x144E04u;
label_144e04:
    // 0x144e04: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x144e08: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x144e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x144e0c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x144e0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e10: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x144E10u;
    SET_GPR_U32(ctx, 31, 0x144E18u);
    ctx->pc = 0x144E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E10u;
            // 0x144e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E18u; }
        if (ctx->pc != 0x144E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E18u; }
        if (ctx->pc != 0x144E18u) { return; }
    }
    ctx->pc = 0x144E18u;
label_144e18:
    // 0x144e18: 0xdf8a87d0  ld          $t2, -0x7830($gp)
    ctx->pc = 0x144e18u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x144e1c: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x144e20: 0x300d0001  andi        $t5, $zero, 0x1
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x144e24: 0x240cfffe  addiu       $t4, $zero, -0x2
    ctx->pc = 0x144e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144e28: 0x27a3006a  addiu       $v1, $sp, 0x6A
    ctx->pc = 0x144e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 106));
    // 0x144e2c: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x144e2cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x144e30: 0x2408fff9  addiu       $t0, $zero, -0x7
    ctx->pc = 0x144e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x144e34: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x144e34u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x144e38: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x144e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x144e3c: 0xd3980  sll         $a3, $t5, 6
    ctx->pc = 0x144e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x144e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e44: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x144e44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x144e48: 0x93aa0068  lbu         $t2, 0x68($sp)
    ctx->pc = 0x144e48u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144e4c: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x144e4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x144e50: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x144e54: 0xa3aa0068  sb          $t2, 0x68($sp)
    ctx->pc = 0x144e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 10));
    // 0x144e58: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x144e58u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144e5c: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x144e5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x144e60: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x144e60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x144e64: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x144e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x144e68: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x144e68u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144e6c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x144e6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x144e70: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x144e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x144e74: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x144e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x144e78: 0x93a30069  lbu         $v1, 0x69($sp)
    ctx->pc = 0x144e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
    // 0x144e7c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x144e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x144e80: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x144e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x144e84: 0xa3a30069  sb          $v1, 0x69($sp)
    ctx->pc = 0x144e84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x144e88: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e8c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144E8Cu;
    SET_GPR_U32(ctx, 31, 0x144E94u);
    ctx->pc = 0x144E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144E8Cu;
            // 0x144e90: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E94u; }
        if (ctx->pc != 0x144E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E94u; }
        if (ctx->pc != 0x144E94u) { return; }
    }
    ctx->pc = 0x144E94u;
label_144e94:
    // 0x144e94: 0xdf8687e0  ld          $a2, -0x7820($gp)
    ctx->pc = 0x144e94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x144e98: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x144e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x144e9c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144ea0: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x144ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x144ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ea8: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x144ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x144eac: 0x93a60074  lbu         $a2, 0x74($sp)
    ctx->pc = 0x144eacu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x144eb0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x144eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x144eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x144eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144eb8: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x144eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x144ebc: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x144ebcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x144ec0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144EC0u;
    SET_GPR_U32(ctx, 31, 0x144EC8u);
    ctx->pc = 0x144EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144EC0u;
            // 0x144ec4: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EC8u; }
        if (ctx->pc != 0x144EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144EC8u; }
        if (ctx->pc != 0x144EC8u) { return; }
    }
    ctx->pc = 0x144EC8u;
label_144ec8:
    // 0x144ec8: 0xdf8587f0  ld          $a1, -0x7810($gp)
    ctx->pc = 0x144ec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x144ecc: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x144eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x144ed0: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x144ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x144ed4: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x144ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x144ed8: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x144ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x144edc: 0x640c0002  daddiu      $t4, $zero, 0x2
    ctx->pc = 0x144edcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x144ee0: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x144ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x144ee4: 0x640a0008  daddiu      $t2, $zero, 0x8
    ctx->pc = 0x144ee4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x144ee8: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x144eec: 0x64080020  daddiu      $t0, $zero, 0x20
    ctx->pc = 0x144eecu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x144ef0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x144ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x144ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ef8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x144ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x144efc: 0x93ad0078  lbu         $t5, 0x78($sp)
    ctx->pc = 0x144efcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144f00: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x144f00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x144f04: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x144f04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x144f08: 0xa3ab0078  sb          $t3, 0x78($sp)
    ctx->pc = 0x144f08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 11));
    // 0x144f0c: 0x93ab0078  lbu         $t3, 0x78($sp)
    ctx->pc = 0x144f0cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144f10: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x144f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x144f14: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x144f14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x144f18: 0xa3a90078  sb          $t1, 0x78($sp)
    ctx->pc = 0x144f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 9));
    // 0x144f1c: 0x93a90078  lbu         $t1, 0x78($sp)
    ctx->pc = 0x144f1cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144f20: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x144f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x144f24: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x144f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x144f28: 0xa3a70078  sb          $a3, 0x78($sp)
    ctx->pc = 0x144f28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x144f2c: 0x93a70078  lbu         $a3, 0x78($sp)
    ctx->pc = 0x144f2cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144f30: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x144f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x144f34: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x144f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x144f38: 0xa3a30078  sb          $v1, 0x78($sp)
    ctx->pc = 0x144f38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x144f3c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x144f3cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144f40: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144F40u;
    SET_GPR_U32(ctx, 31, 0x144F48u);
    ctx->pc = 0x144F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F40u;
            // 0x144f44: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F48u; }
        if (ctx->pc != 0x144F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F48u; }
        if (ctx->pc != 0x144F48u) { return; }
    }
    ctx->pc = 0x144F48u;
label_144f48:
    // 0x144f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x144f50: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144F50u;
    SET_GPR_U32(ctx, 31, 0x144F58u);
    ctx->pc = 0x144F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F50u;
            // 0x144f54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F58u; }
        if (ctx->pc != 0x144F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F58u; }
        if (ctx->pc != 0x144F58u) { return; }
    }
    ctx->pc = 0x144F58u;
label_144f58:
    // 0x144f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f60: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144F60u;
    SET_GPR_U32(ctx, 31, 0x144F68u);
    ctx->pc = 0x144F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F60u;
            // 0x144f64: 0x24060146  addiu       $a2, $zero, 0x146 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F68u; }
        if (ctx->pc != 0x144F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F68u; }
        if (ctx->pc != 0x144F68u) { return; }
    }
    ctx->pc = 0x144F68u;
label_144f68:
    // 0x144f68: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x144f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x144f6c: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x144f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x144f70: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x144f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x144f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144f78: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x144f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x144f7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x144f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x144f80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f88: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x144f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144f8c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x144f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x144f90: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x144f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x144f94: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144F94u;
    SET_GPR_U32(ctx, 31, 0x144F9Cu);
    ctx->pc = 0x144F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144F94u;
            // 0x144f98: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F9Cu; }
        if (ctx->pc != 0x144F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144F9Cu; }
        if (ctx->pc != 0x144F9Cu) { return; }
    }
    ctx->pc = 0x144F9Cu;
label_144f9c:
    // 0x144f9c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x144F9Cu;
    {
        const bool branch_taken_0x144f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144F9Cu;
            // 0x144fa0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f9c) {
            ctx->pc = 0x145014u;
            goto label_145014;
        }
    }
    ctx->pc = 0x144FA4u;
label_144fa4:
    // 0x144fa4: 0x8f828798  lw          $v0, -0x7868($gp)
    ctx->pc = 0x144fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x144fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fac: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x144facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x144fb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x144fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144fb4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144fb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x144fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x144fbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x144fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x144fc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144fc4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x144fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x144fc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x144fc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144fcc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144FCCu;
    SET_GPR_U32(ctx, 31, 0x144FD4u);
    ctx->pc = 0x144FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144FCCu;
            // 0x144fd0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FD4u; }
        if (ctx->pc != 0x144FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144FD4u; }
        if (ctx->pc != 0x144FD4u) { return; }
    }
    ctx->pc = 0x144FD4u;
label_144fd4:
    // 0x144fd4: 0x8f868798  lw          $a2, -0x7868($gp)
    ctx->pc = 0x144fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x144fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fdc: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x144fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x144fe0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x144fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144fe4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x144fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x144fe8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x144fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x144fec: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x144fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x144ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144ff4: 0x24c30200  addiu       $v1, $a2, 0x200
    ctx->pc = 0x144ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x144ff8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x144ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144ffc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x144ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x145000: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x145000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x145004: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x145004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x145008: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x145008u;
    SET_GPR_U32(ctx, 31, 0x145010u);
    ctx->pc = 0x14500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145008u;
            // 0x14500c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145010u; }
        if (ctx->pc != 0x145010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145010u; }
        if (ctx->pc != 0x145010u) { return; }
    }
    ctx->pc = 0x145010u;
label_145010:
    // 0x145010: 0x26310200  addiu       $s1, $s1, 0x200
    ctx->pc = 0x145010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_145014:
    // 0x145014: 0x0  nop
    ctx->pc = 0x145014u;
    // NOP
    // 0x145018: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x145018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x14501c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14501cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145020: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x145020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145024: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x145024u;
    {
        const bool branch_taken_0x145024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145024u;
            // 0x145028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145024) {
            ctx->pc = 0x144FA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144fa4;
        }
    }
    ctx->pc = 0x14502Cu;
    // 0x14502c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x14502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x145030: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x145030u;
    SET_GPR_U32(ctx, 31, 0x145038u);
    ctx->pc = 0x145034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145030u;
            // 0x145034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145038u; }
        if (ctx->pc != 0x145038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145038u; }
        if (ctx->pc != 0x145038u) { return; }
    }
    ctx->pc = 0x145038u;
label_145038:
    // 0x145038: 0xc041b54  jal         func_106D50
    ctx->pc = 0x145038u;
    SET_GPR_U32(ctx, 31, 0x145040u);
    ctx->pc = 0x14503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145038u;
            // 0x14503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145040u; }
        if (ctx->pc != 0x145040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145040u; }
        if (ctx->pc != 0x145040u) { return; }
    }
    ctx->pc = 0x145040u;
label_145040:
    // 0x145040: 0xc041b42  jal         func_106D08
    ctx->pc = 0x145040u;
    SET_GPR_U32(ctx, 31, 0x145048u);
    ctx->pc = 0x145044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145040u;
            // 0x145044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145048u; }
        if (ctx->pc != 0x145048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145048u; }
        if (ctx->pc != 0x145048u) { return; }
    }
    ctx->pc = 0x145048u;
label_145048:
    // 0x145048: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x145048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14504c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14504cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145050: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14505c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14505cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145060: 0x3e00008  jr          $ra
    ctx->pc = 0x145060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145060u;
            // 0x145064: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145068u;
}
