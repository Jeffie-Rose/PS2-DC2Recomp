#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuPlacedHouseDraw__FRi
// Address: 0x1f6af0 - 0x1f73fc
void MenuPlacedHouseDraw__FRi_0x1f6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuPlacedHouseDraw__FRi_0x1f6af0");
#endif

    switch (ctx->pc) {
        case 0x1f6b40u: goto label_1f6b40;
        case 0x1f6b60u: goto label_1f6b60;
        case 0x1f6ba0u: goto label_1f6ba0;
        case 0x1f6bb8u: goto label_1f6bb8;
        case 0x1f6bd8u: goto label_1f6bd8;
        case 0x1f6c08u: goto label_1f6c08;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c50u: goto label_1f6c50;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c88u: goto label_1f6c88;
        case 0x1f6ca0u: goto label_1f6ca0;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cf0u: goto label_1f6cf0;
        case 0x1f6d10u: goto label_1f6d10;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6dbcu: goto label_1f6dbc;
        case 0x1f6ddcu: goto label_1f6ddc;
        case 0x1f6e5cu: goto label_1f6e5c;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6e8cu: goto label_1f6e8c;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6ec4u: goto label_1f6ec4;
        case 0x1f6ee4u: goto label_1f6ee4;
        case 0x1f6f38u: goto label_1f6f38;
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f70u: goto label_1f6f70;
        case 0x1f6f8cu: goto label_1f6f8c;
        case 0x1f6f94u: goto label_1f6f94;
        case 0x1f6f9cu: goto label_1f6f9c;
        case 0x1f6fccu: goto label_1f6fcc;
        case 0x1f6fe8u: goto label_1f6fe8;
        case 0x1f7008u: goto label_1f7008;
        case 0x1f7034u: goto label_1f7034;
        case 0x1f704cu: goto label_1f704c;
        case 0x1f706cu: goto label_1f706c;
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70b4u: goto label_1f70b4;
        case 0x1f70d4u: goto label_1f70d4;
        case 0x1f70f4u: goto label_1f70f4;
        case 0x1f7134u: goto label_1f7134;
        case 0x1f713cu: goto label_1f713c;
        case 0x1f7170u: goto label_1f7170;
        case 0x1f7178u: goto label_1f7178;
        case 0x1f71a4u: goto label_1f71a4;
        case 0x1f71b4u: goto label_1f71b4;
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71e4u: goto label_1f71e4;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f720cu: goto label_1f720c;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f725cu: goto label_1f725c;
        case 0x1f7270u: goto label_1f7270;
        case 0x1f72c0u: goto label_1f72c0;
        case 0x1f72d8u: goto label_1f72d8;
        case 0x1f72f0u: goto label_1f72f0;
        case 0x1f730cu: goto label_1f730c;
        case 0x1f732cu: goto label_1f732c;
        case 0x1f7344u: goto label_1f7344;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f737cu: goto label_1f737c;
        case 0x1f739cu: goto label_1f739c;
        case 0x1f73b4u: goto label_1f73b4;
        case 0x1f73d4u: goto label_1f73d4;
        default: break;
    }

    ctx->pc = 0x1f6af0u;

    // 0x1f6af0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1f6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1f6af4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f6af8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f6afc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f6afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f6b00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f6b04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f6b04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f6b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f6b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f6b14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6b18: 0x8f848f64  lw          $a0, -0x709C($gp)
    ctx->pc = 0x1f6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938468)));
    // 0x1f6b1c: 0x1080022d  beqz        $a0, . + 4 + (0x22D << 2)
    ctx->pc = 0x1F6B1Cu;
    {
        const bool branch_taken_0x1f6b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b1c) {
            ctx->pc = 0x1F73D4u;
            goto label_1f73d4;
        }
    }
    ctx->pc = 0x1F6B24u;
    // 0x1f6b24: 0x8f839020  lw          $v1, -0x6FE0($gp)
    ctx->pc = 0x1f6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6b28: 0x1060022a  beqz        $v1, . + 4 + (0x22A << 2)
    ctx->pc = 0x1F6B28u;
    {
        const bool branch_taken_0x1f6b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B28u;
            // 0x1f6b2c: 0x27b302d4  addiu       $s3, $sp, 0x2D4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b28) {
            ctx->pc = 0x1F73D4u;
            goto label_1f73d4;
        }
    }
    ctx->pc = 0x1F6B30u;
    // 0x1f6b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b34: 0x27a602d0  addiu       $a2, $sp, 0x2D0
    ctx->pc = 0x1f6b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f6b38: 0xc08974c  jal         func_225D30
    ctx->pc = 0x1F6B38u;
    SET_GPR_U32(ctx, 31, 0x1F6B40u);
    ctx->pc = 0x1F6B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B38u;
            // 0x1f6b3c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B40u; }
        if (ctx->pc != 0x1F6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B40u; }
        if (ctx->pc != 0x1F6B40u) { return; }
    }
    ctx->pc = 0x1F6B40u;
label_1f6b40:
    // 0x1f6b40: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6b44: 0x28610209  slti        $at, $v1, 0x209
    ctx->pc = 0x1f6b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)521) ? 1 : 0);
    // 0x1f6b48: 0x10200222  beqz        $at, . + 4 + (0x222 << 2)
    ctx->pc = 0x1F6B48u;
    {
        const bool branch_taken_0x1f6b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b48) {
            ctx->pc = 0x1F73D4u;
            goto label_1f73d4;
        }
    }
    ctx->pc = 0x1F6B50u;
    // 0x1f6b50: 0x8f829020  lw          $v0, -0x6FE0($gp)
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6b54: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6b58: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F6B58u;
    SET_GPR_U32(ctx, 31, 0x1F6B60u);
    ctx->pc = 0x1F6B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B58u;
            // 0x1f6b5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B60u; }
        if (ctx->pc != 0x1F6B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B60u; }
        if (ctx->pc != 0x1F6B60u) { return; }
    }
    ctx->pc = 0x1F6B60u;
label_1f6b60:
    // 0x1f6b60: 0x8f858f64  lw          $a1, -0x709C($gp)
    ctx->pc = 0x1f6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938468)));
    // 0x1f6b64: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1f6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1f6b68: 0x34495556  ori         $t1, $v0, 0x5556
    ctx->pc = 0x1f6b68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1f6b6c: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x1f6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6b70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6b74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f6b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f6b78: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6b7c: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f6b80: 0x90b10058  lbu         $s1, 0x58($a1)
    ctx->pc = 0x1f6b80u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1f6b84: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1f6b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f6b88: 0x1310018  mult        $zero, $t1, $s1
    ctx->pc = 0x1f6b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f6b8c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f6b90: 0x111fc2  srl         $v1, $s1, 31
    ctx->pc = 0x1f6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1f6b94: 0x1010  mfhi        $v0
    ctx->pc = 0x1f6b94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f6b98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6B98u;
    SET_GPR_U32(ctx, 31, 0x1F6BA0u);
    ctx->pc = 0x1F6B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B98u;
            // 0x1f6b9c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BA0u; }
        if (ctx->pc != 0x1F6BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BA0u; }
        if (ctx->pc != 0x1F6BA0u) { return; }
    }
    ctx->pc = 0x1F6BA0u;
label_1f6ba0:
    // 0x1f6ba0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1f6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1f6ba4: 0x240500f2  addiu       $a1, $zero, 0xF2
    ctx->pc = 0x1f6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x1f6ba8: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6bac: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6bb0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6BB0u;
    SET_GPR_U32(ctx, 31, 0x1F6BB8u);
    ctx->pc = 0x1F6BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BB0u;
            // 0x1f6bb4: 0x240800e0  addiu       $t0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BB8u; }
        if (ctx->pc != 0x1F6BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BB8u; }
        if (ctx->pc != 0x1F6BB8u) { return; }
    }
    ctx->pc = 0x1F6BB8u;
label_1f6bb8:
    // 0x1f6bb8: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6bbc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f6bc0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1f6bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1f6bc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6bccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bd0: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6BD0u;
    SET_GPR_U32(ctx, 31, 0x1F6BD8u);
    ctx->pc = 0x1F6BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BD0u;
            // 0x1f6bd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BD8u; }
        if (ctx->pc != 0x1F6BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6BD8u; }
        if (ctx->pc != 0x1F6BD8u) { return; }
    }
    ctx->pc = 0x1F6BD8u;
label_1f6bd8:
    // 0x1f6bd8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f6bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f6bdc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1f6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1f6be0: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x1f6be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1f6be4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f6be8: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x1f6be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1f6bec: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6bf0: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6bf4: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1f6bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f6bf8: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1f6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1f6bfc: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1f6bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1f6c00: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6C00u;
    SET_GPR_U32(ctx, 31, 0x1F6C08u);
    ctx->pc = 0x1F6C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C00u;
            // 0x1f6c04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C08u; }
        if (ctx->pc != 0x1F6C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C08u; }
        if (ctx->pc != 0x1F6C08u) { return; }
    }
    ctx->pc = 0x1F6C08u;
label_1f6c08:
    // 0x1f6c08: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6c0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f6c10: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1f6c14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c20: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6C20u;
    SET_GPR_U32(ctx, 31, 0x1F6C28u);
    ctx->pc = 0x1F6C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C20u;
            // 0x1f6c24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C28u; }
        if (ctx->pc != 0x1F6C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C28u; }
        if (ctx->pc != 0x1F6C28u) { return; }
    }
    ctx->pc = 0x1F6C28u;
label_1f6c28:
    // 0x1f6c28: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6c2c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1f6c30: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x1f6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x1f6c34: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x1f6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x1f6c38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f6c3c: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6c40: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f6c44: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1f6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1f6c48: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6C48u;
    SET_GPR_U32(ctx, 31, 0x1F6C50u);
    ctx->pc = 0x1F6C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C48u;
            // 0x1f6c4c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C50u; }
        if (ctx->pc != 0x1F6C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C50u; }
        if (ctx->pc != 0x1F6C50u) { return; }
    }
    ctx->pc = 0x1F6C50u;
label_1f6c50:
    // 0x1f6c50: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6c54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c58: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1f6c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f6c5c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1f6c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c68: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6C68u;
    SET_GPR_U32(ctx, 31, 0x1F6C70u);
    ctx->pc = 0x1F6C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C68u;
            // 0x1f6c6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C70u; }
        if (ctx->pc != 0x1F6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C70u; }
        if (ctx->pc != 0x1F6C70u) { return; }
    }
    ctx->pc = 0x1F6C70u;
label_1f6c70:
    // 0x1f6c70: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x1f6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6c74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f6c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f6c78: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1f6c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6c7c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6c80: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6C80u;
    SET_GPR_U32(ctx, 31, 0x1F6C88u);
    ctx->pc = 0x1F6C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C80u;
            // 0x1f6c84: 0x240800e0  addiu       $t0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C88u; }
        if (ctx->pc != 0x1F6C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C88u; }
        if (ctx->pc != 0x1F6C88u) { return; }
    }
    ctx->pc = 0x1F6C88u;
label_1f6c88:
    // 0x1f6c88: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1f6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1f6c8c: 0x240500f2  addiu       $a1, $zero, 0xF2
    ctx->pc = 0x1f6c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x1f6c90: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6c94: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6c98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6C98u;
    SET_GPR_U32(ctx, 31, 0x1F6CA0u);
    ctx->pc = 0x1F6C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C98u;
            // 0x1f6c9c: 0x240800e0  addiu       $t0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CA0u; }
        if (ctx->pc != 0x1F6CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CA0u; }
        if (ctx->pc != 0x1F6CA0u) { return; }
    }
    ctx->pc = 0x1F6CA0u;
label_1f6ca0:
    // 0x1f6ca0: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6ca4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6ca8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f6cac: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1f6cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1f6cb0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cb4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6cb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cb8: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6CB8u;
    SET_GPR_U32(ctx, 31, 0x1F6CC0u);
    ctx->pc = 0x1F6CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CB8u;
            // 0x1f6cbc: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CC0u; }
        if (ctx->pc != 0x1F6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CC0u; }
        if (ctx->pc != 0x1F6CC0u) { return; }
    }
    ctx->pc = 0x1F6CC0u;
label_1f6cc0:
    // 0x1f6cc0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1f6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f6cc4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1f6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1f6cc8: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x1f6cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1f6ccc: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x1f6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1f6cd0: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x1f6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1f6cd4: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6cd8: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6cdc: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1f6cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f6ce0: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x1f6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x1f6ce4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1f6ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x1f6ce8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6CE8u;
    SET_GPR_U32(ctx, 31, 0x1F6CF0u);
    ctx->pc = 0x1F6CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CE8u;
            // 0x1f6cec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CF0u; }
        if (ctx->pc != 0x1F6CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CF0u; }
        if (ctx->pc != 0x1F6CF0u) { return; }
    }
    ctx->pc = 0x1F6CF0u;
label_1f6cf0:
    // 0x1f6cf0: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6cf4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6cf8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f6cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f6cfc: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x1f6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1f6d00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d04: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d08: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6D08u;
    SET_GPR_U32(ctx, 31, 0x1F6D10u);
    ctx->pc = 0x1F6D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D08u;
            // 0x1f6d0c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D10u; }
        if (ctx->pc != 0x1F6D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D10u; }
        if (ctx->pc != 0x1F6D10u) { return; }
    }
    ctx->pc = 0x1F6D10u;
label_1f6d10:
    // 0x1f6d10: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1f6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f6d14: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1f6d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1f6d18: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1f6d1c: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x1f6d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x1f6d20: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1f6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1f6d24: 0x240800e0  addiu       $t0, $zero, 0xE0
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f6d28: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1f6d2c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1f6d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1f6d30: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x1F6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D30u;
            // 0x1f6d34: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D38u; }
        if (ctx->pc != 0x1F6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D38u; }
        if (ctx->pc != 0x1F6D38u) { return; }
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6d3c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6d40: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f6d44: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x1f6d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1f6d48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d4c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d50: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6D50u;
    SET_GPR_U32(ctx, 31, 0x1F6D58u);
    ctx->pc = 0x1F6D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D50u;
            // 0x1f6d54: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D58u; }
        if (ctx->pc != 0x1F6D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D58u; }
        if (ctx->pc != 0x1F6D58u) { return; }
    }
    ctx->pc = 0x1F6D58u;
label_1f6d58:
    // 0x1f6d58: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f6d5c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1f6d60: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x1f6d64: 0x2463e850  addiu       $v1, $v1, -0x17B0
    ctx->pc = 0x1f6d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961232));
    // 0x1f6d68: 0x24c6e810  addiu       $a2, $a2, -0x17F0
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961168));
    // 0x1f6d6c: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6d70: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1f6d74: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f6d78: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1f6d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1f6d7c: 0xc78021  addu        $s0, $a2, $a3
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f6d80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6d84: 0x86060002  lh          $a2, 0x2($s0)
    ctx->pc = 0x1f6d84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1f6d88: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1f6d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6d8c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1f6d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6d90: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f6d94: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x1f6d94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1f6d98: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6D98u;
    SET_GPR_U32(ctx, 31, 0x1F6DA0u);
    ctx->pc = 0x1F6D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D98u;
            // 0x1f6d9c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DA0u; }
        if (ctx->pc != 0x1F6DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DA0u; }
        if (ctx->pc != 0x1F6DA0u) { return; }
    }
    ctx->pc = 0x1F6DA0u;
label_1f6da0:
    // 0x1f6da0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6da4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6da8: 0x86070004  lh          $a3, 0x4($s0)
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f6dac: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f6db0: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1f6db4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6DB4u;
    SET_GPR_U32(ctx, 31, 0x1F6DBCu);
    ctx->pc = 0x1F6DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DB4u;
            // 0x1f6db8: 0x2446000e  addiu       $a2, $v0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DBCu; }
        if (ctx->pc != 0x1F6DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DBCu; }
        if (ctx->pc != 0x1F6DBCu) { return; }
    }
    ctx->pc = 0x1F6DBCu;
label_1f6dbc:
    // 0x1f6dbc: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6dc0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6dc4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x1f6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f6dc8: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1f6dcc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6dd0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6dd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6dd4: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6DD4u;
    SET_GPR_U32(ctx, 31, 0x1F6DDCu);
    ctx->pc = 0x1F6DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DD4u;
            // 0x1f6dd8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DDCu; }
        if (ctx->pc != 0x1F6DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6DDCu; }
        if (ctx->pc != 0x1F6DDCu) { return; }
    }
    ctx->pc = 0x1F6DDCu;
label_1f6ddc:
    // 0x1f6ddc: 0x83829074  lb          $v0, -0x6F8C($gp)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1f6de0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6DE0u;
    {
        const bool branch_taken_0x1f6de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DE0u;
            // 0x1f6de4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6de0) {
            ctx->pc = 0x1F6DF4u;
            goto label_1f6df4;
        }
    }
    ctx->pc = 0x1F6DE8u;
    // 0x1f6de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6dec: 0xa3809070  sb          $zero, -0x6F90($gp)
    ctx->pc = 0x1f6decu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938736), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6df0: 0xa3829074  sb          $v0, -0x6F8C($gp)
    ctx->pc = 0x1f6df0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938740), (uint8_t)GPR_U32(ctx, 2));
label_1f6df4:
    // 0x1f6df4: 0x83829070  lb          $v0, -0x6F90($gp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1f6df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6dfc: 0xa3829070  sb          $v0, -0x6F90($gp)
    ctx->pc = 0x1f6dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938736), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6e00: 0x83839070  lb          $v1, -0x6F90($gp)
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938736)));
    // 0x1f6e04: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x1f6e04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1f6e08: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6E08u;
    {
        const bool branch_taken_0x1f6e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e08) {
            ctx->pc = 0x1F6E1Cu;
            goto label_1f6e1c;
        }
    }
    ctx->pc = 0x1F6E10u;
    // 0x1f6e10: 0x8f828f7c  lw          $v0, -0x7084($gp)
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938492)));
    // 0x1f6e14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6E14u;
    {
        const bool branch_taken_0x1f6e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E14u;
            // 0x1f6e18: 0x28620050  slti        $v0, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e14) {
            ctx->pc = 0x1F6E24u;
            goto label_1f6e24;
        }
    }
    ctx->pc = 0x1F6E1Cu;
label_1f6e1c:
    // 0x1f6e1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e20: 0x28620050  slti        $v0, $v1, 0x50
    ctx->pc = 0x1f6e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
label_1f6e24:
    // 0x1f6e24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6E24u;
    {
        const bool branch_taken_0x1f6e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e24) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6E2Cu;
    // 0x1f6e2c: 0xa3809070  sb          $zero, -0x6F90($gp)
    ctx->pc = 0x1f6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938736), (uint8_t)GPR_U32(ctx, 0));
label_1f6e30:
    // 0x1f6e30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6e34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f6e38: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6e3c: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1f6e40: 0x240601e2  addiu       $a2, $zero, 0x1E2
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
    // 0x1f6e44: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f6e48: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x1f6e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f6e4c: 0x24760030  addiu       $s6, $v1, 0x30
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1f6e50: 0x247400ae  addiu       $s4, $v1, 0xAE
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 174));
    // 0x1f6e54: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6E54u;
    SET_GPR_U32(ctx, 31, 0x1F6E5Cu);
    ctx->pc = 0x1F6E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E54u;
            // 0x1f6e58: 0x245200c8  addiu       $s2, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E5Cu; }
        if (ctx->pc != 0x1F6E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E5Cu; }
        if (ctx->pc != 0x1F6E5Cu) { return; }
    }
    ctx->pc = 0x1F6E5Cu;
label_1f6e5c:
    // 0x1f6e5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f6e60: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x1f6e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1f6e64: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x1f6e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x1f6e68: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f6e6c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6E74u);
    ctx->pc = 0x1F6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E6Cu;
            // 0x1f6e70: 0x24080012  addiu       $t0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E74u; }
        if (ctx->pc != 0x1F6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E74u; }
        if (ctx->pc != 0x1F6E74u) { return; }
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f6e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6e78: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1f6e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e7c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1f6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1f6e80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6E84u;
    SET_GPR_U32(ctx, 31, 0x1F6E8Cu);
    ctx->pc = 0x1F6E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E84u;
            // 0x1f6e88: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E8Cu; }
        if (ctx->pc != 0x1F6E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E8Cu; }
        if (ctx->pc != 0x1F6E8Cu) { return; }
    }
    ctx->pc = 0x1F6E8Cu;
label_1f6e8c:
    // 0x1f6e8c: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6e90: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6e94: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1f6e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x1f6e98: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f6e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ea0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6ea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ea4: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6EA4u;
    SET_GPR_U32(ctx, 31, 0x1F6EACu);
    ctx->pc = 0x1F6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EA4u;
            // 0x1f6ea8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EACu; }
        if (ctx->pc != 0x1F6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EACu; }
        if (ctx->pc != 0x1F6EACu) { return; }
    }
    ctx->pc = 0x1F6EACu;
label_1f6eac:
    // 0x1f6eac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6eb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6eb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f6eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6eb8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1f6eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f6ebc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6EBCu;
    SET_GPR_U32(ctx, 31, 0x1F6EC4u);
    ctx->pc = 0x1F6EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EBCu;
            // 0x1f6ec0: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EC4u; }
        if (ctx->pc != 0x1F6EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EC4u; }
        if (ctx->pc != 0x1F6EC4u) { return; }
    }
    ctx->pc = 0x1F6EC4u;
label_1f6ec4:
    // 0x1f6ec4: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6ec8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6ecc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ed0: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1f6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f6ed4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f6ed8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6ed8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6edc: 0xc088004  jal         func_220010
    ctx->pc = 0x1F6EDCu;
    SET_GPR_U32(ctx, 31, 0x1F6EE4u);
    ctx->pc = 0x1F6EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EDCu;
            // 0x1f6ee0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EE4u; }
        if (ctx->pc != 0x1F6EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EE4u; }
        if (ctx->pc != 0x1F6EE4u) { return; }
    }
    ctx->pc = 0x1F6EE4u;
label_1f6ee4:
    // 0x1f6ee4: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6ee8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f6eec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f6eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f6ef0: 0x8f828f84  lw          $v0, -0x707C($gp)
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938500)));
    // 0x1f6ef4: 0x8f908f80  lw          $s0, -0x7080($gp)
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    // 0x1f6ef8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f6efc: 0x24a58a28  addiu       $a1, $a1, -0x75D8
    ctx->pc = 0x1f6efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937128));
    // 0x1f6f00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f6f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6f04: 0x2463ffee  addiu       $v1, $v1, -0x12
    ctx->pc = 0x1f6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
    // 0x1f6f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6f0c: 0x0  nop
    ctx->pc = 0x1f6f0cu;
    // NOP
    // 0x1f6f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6f14: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x1f6f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x1f6f18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6f1c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x1f6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x1f6f20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6f28: 0x0  nop
    ctx->pc = 0x1f6f28u;
    // NOP
    // 0x1f6f2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6f2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6f30: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F6F30u;
    SET_GPR_U32(ctx, 31, 0x1F6F38u);
    ctx->pc = 0x1F6F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F30u;
            // 0x1f6f34: 0xe7a002dc  swc1        $f0, 0x2DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F38u; }
        if (ctx->pc != 0x1F6F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F38u; }
        if (ctx->pc != 0x1F6F38u) { return; }
    }
    ctx->pc = 0x1F6F38u;
label_1f6f38:
    // 0x1f6f38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f6f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f3c: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6F3Cu;
    {
        const bool branch_taken_0x1f6f3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f3c) {
            ctx->pc = 0x1F6F70u;
            goto label_1f6f70;
        }
    }
    ctx->pc = 0x1F6F44u;
    // 0x1f6f44: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f6f48: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F6F48u;
    SET_GPR_U32(ctx, 31, 0x1F6F50u);
    ctx->pc = 0x1F6F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F48u;
            // 0x1f6f4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F50u; }
        if (ctx->pc != 0x1F6F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F50u; }
        if (ctx->pc != 0x1F6F50u) { return; }
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f6f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6f5c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f6f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f6f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f6f64: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x1f6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x1f6f68: 0xc088e94  jal         func_223A50
    ctx->pc = 0x1F6F68u;
    SET_GPR_U32(ctx, 31, 0x1F6F70u);
    ctx->pc = 0x1F6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F68u;
            // 0x1f6f6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F70u; }
        if (ctx->pc != 0x1F6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F70u; }
        if (ctx->pc != 0x1F6F70u) { return; }
    }
    ctx->pc = 0x1F6F70u;
label_1f6f70:
    // 0x1f6f70: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6f74: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f6f78: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6f7c: 0x2446002e  addiu       $a2, $v0, 0x2E
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    // 0x1f6f80: 0x244800d4  addiu       $t0, $v0, 0xD4
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1f6f84: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6F84u;
    SET_GPR_U32(ctx, 31, 0x1F6F8Cu);
    ctx->pc = 0x1F6F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F84u;
            // 0x1f6f88: 0x24a700ce  addiu       $a3, $a1, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 206));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F8Cu; }
        if (ctx->pc != 0x1F6F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F8Cu; }
        if (ctx->pc != 0x1F6F8Cu) { return; }
    }
    ctx->pc = 0x1F6F8Cu;
label_1f6f8c:
    // 0x1f6f8c: 0xc088038  jal         func_2200E0
    ctx->pc = 0x1F6F8Cu;
    SET_GPR_U32(ctx, 31, 0x1F6F94u);
    ctx->pc = 0x1F6F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F8Cu;
            // 0x1f6f90: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F94u; }
        if (ctx->pc != 0x1F6F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F94u; }
        if (ctx->pc != 0x1F6F94u) { return; }
    }
    ctx->pc = 0x1F6F94u;
label_1f6f94:
    // 0x1f6f94: 0xc088050  jal         func_220140
    ctx->pc = 0x1F6F94u;
    SET_GPR_U32(ctx, 31, 0x1F6F9Cu);
    ctx->pc = 0x1F6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F94u;
            // 0x1f6f98: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F9Cu; }
        if (ctx->pc != 0x1F6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F9Cu; }
        if (ctx->pc != 0x1F6F9Cu) { return; }
    }
    ctx->pc = 0x1F6F9Cu;
label_1f6f9c:
    // 0x1f6f9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6fa0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f6fa4: 0x8fa902d0  lw          $t1, 0x2D0($sp)
    ctx->pc = 0x1f6fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6fac: 0x8f828f78  lw          $v0, -0x7088($gp)
    ctx->pc = 0x1f6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938488)));
    // 0x1f6fb0: 0x24060229  addiu       $a2, $zero, 0x229
    ctx->pc = 0x1f6fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 553));
    // 0x1f6fb4: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x1f6fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f6fb8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1f6fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6fbc: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x1f6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x1f6fc0: 0x2530001a  addiu       $s0, $t1, 0x1A
    ctx->pc = 0x1f6fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 26));
    // 0x1f6fc4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6FC4u;
    SET_GPR_U32(ctx, 31, 0x1F6FCCu);
    ctx->pc = 0x1F6FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FC4u;
            // 0x1f6fc8: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FCCu; }
        if (ctx->pc != 0x1F6FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FCCu; }
        if (ctx->pc != 0x1F6FCCu) { return; }
    }
    ctx->pc = 0x1F6FCCu;
label_1f6fcc:
    // 0x1f6fcc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1f6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f6fd0: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1f6fd4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1f6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f6fd8: 0x240700cc  addiu       $a3, $zero, 0xCC
    ctx->pc = 0x1f6fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1f6fdc: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1f6fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6fe0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F6FE0u;
    SET_GPR_U32(ctx, 31, 0x1F6FE8u);
    ctx->pc = 0x1F6FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FE0u;
            // 0x1f6fe4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FE8u; }
        if (ctx->pc != 0x1F6FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6FE8u; }
        if (ctx->pc != 0x1F6FE8u) { return; }
    }
    ctx->pc = 0x1F6FE8u;
label_1f6fe8:
    // 0x1f6fe8: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f6fec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6ff0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1f6ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f6ff4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f6ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f6ff8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f6ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ffc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f6ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7000: 0xc088004  jal         func_220010
    ctx->pc = 0x1F7000u;
    SET_GPR_U32(ctx, 31, 0x1F7008u);
    ctx->pc = 0x1F7004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7000u;
            // 0x1f7004: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7008u; }
        if (ctx->pc != 0x1F7008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7008u; }
        if (ctx->pc != 0x1F7008u) { return; }
    }
    ctx->pc = 0x1F7008u;
label_1f7008:
    // 0x1f7008: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f700c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f700cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1f7010: 0x26460019  addiu       $a2, $s2, 0x19
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x1f7014: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x1f7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x1f7018: 0x2605fffb  addiu       $a1, $s0, -0x5
    ctx->pc = 0x1f7018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967291));
    // 0x1f701c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f701cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f7020: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1f7020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7024: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f7028: 0x86480006  lh          $t0, 0x6($s2)
    ctx->pc = 0x1f7028u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1f702c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F702Cu;
    SET_GPR_U32(ctx, 31, 0x1F7034u);
    ctx->pc = 0x1F7030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F702Cu;
            // 0x1f7030: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7034u; }
        if (ctx->pc != 0x1F7034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7034u; }
        if (ctx->pc != 0x1F7034u) { return; }
    }
    ctx->pc = 0x1F7034u;
label_1f7034:
    // 0x1f7034: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1f7034u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f7038: 0x86460002  lh          $a2, 0x2($s2)
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1f703c: 0x86470004  lh          $a3, 0x4($s2)
    ctx->pc = 0x1f703cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f7040: 0x86480006  lh          $t0, 0x6($s2)
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1f7044: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F7044u;
    SET_GPR_U32(ctx, 31, 0x1F704Cu);
    ctx->pc = 0x1F7048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7044u;
            // 0x1f7048: 0x27a40280  addiu       $a0, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F704Cu; }
        if (ctx->pc != 0x1F704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F704Cu; }
        if (ctx->pc != 0x1F704Cu) { return; }
    }
    ctx->pc = 0x1F704Cu;
label_1f704c:
    // 0x1f704c: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f7050: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f7050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f7054: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f7054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f7058: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1f705c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f705cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7060: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f7060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7064: 0xc088004  jal         func_220010
    ctx->pc = 0x1F7064u;
    SET_GPR_U32(ctx, 31, 0x1F706Cu);
    ctx->pc = 0x1F7068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7064u;
            // 0x1f7068: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F706Cu; }
        if (ctx->pc != 0x1F706Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F706Cu; }
        if (ctx->pc != 0x1F706Cu) { return; }
    }
    ctx->pc = 0x1F706Cu;
label_1f706c:
    // 0x1f706c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f7070: 0xafb000f0  sw          $s0, 0xF0($sp)
    ctx->pc = 0x1f7070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 16));
    // 0x1f7074: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x1f7074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
    // 0x1f7078: 0x27b200f4  addiu       $s2, $sp, 0xF4
    ctx->pc = 0x1f7078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1f707c: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x1f707cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
    // 0x1f7080: 0x27b400e4  addiu       $s4, $sp, 0xE4
    ctx->pc = 0x1f7080u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1f7084: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f7088: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f708c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7090: 0x2406025e  addiu       $a2, $zero, 0x25E
    ctx->pc = 0x1f7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 606));
    // 0x1f7094: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f7094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7098: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1f709c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f709cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1f70a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f70a4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1f70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1f70a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F70A8u;
    SET_GPR_U32(ctx, 31, 0x1F70B0u);
    ctx->pc = 0x1F70ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70A8u;
            // 0x1f70ac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70B0u; }
        if (ctx->pc != 0x1F70B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70B0u; }
        if (ctx->pc != 0x1F70B0u) { return; }
    }
    ctx->pc = 0x1F70B0u;
label_1f70b0:
    // 0x1f70b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f70b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f70b4:
    // 0x1f70b4: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f70b8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f70b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f70bc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1f70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f70c0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1f70c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f70c4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f70c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70c8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f70c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70cc: 0xc088004  jal         func_220010
    ctx->pc = 0x1F70CCu;
    SET_GPR_U32(ctx, 31, 0x1F70D4u);
    ctx->pc = 0x1F70D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70CCu;
            // 0x1f70d0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70D4u; }
        if (ctx->pc != 0x1F70D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70D4u; }
        if (ctx->pc != 0x1F70D4u) { return; }
    }
    ctx->pc = 0x1F70D4u;
label_1f70d4:
    // 0x1f70d4: 0x8f849020  lw          $a0, -0x6FE0($gp)
    ctx->pc = 0x1f70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
    // 0x1f70d8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f70d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f70dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f70e0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f70e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f70e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70e8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70ec: 0xc088004  jal         func_220010
    ctx->pc = 0x1F70ECu;
    SET_GPR_U32(ctx, 31, 0x1F70F4u);
    ctx->pc = 0x1F70F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F70ECu;
            // 0x1f70f0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70F4u; }
        if (ctx->pc != 0x1F70F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F70F4u; }
        if (ctx->pc != 0x1F70F4u) { return; }
    }
    ctx->pc = 0x1F70F4u;
label_1f70f4:
    // 0x1f70f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f70f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f70f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f70fc: 0x2a020016  slti        $v0, $s0, 0x16
    ctx->pc = 0x1f70fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f7100: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1f7104: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1f7104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1f7108: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f7108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f710c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1f710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1f7110: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1f7110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1f7114: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1f7114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f7118: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1f7118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f711c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F711Cu;
    {
        const bool branch_taken_0x1f711c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F711Cu;
            // 0x1f7120: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f711c) {
            ctx->pc = 0x1F70B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f70b4;
        }
    }
    ctx->pc = 0x1F7124u;
    // 0x1f7124: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f7124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f7128: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x1f7128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f712c: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F712Cu;
    SET_GPR_U32(ctx, 31, 0x1F7134u);
    ctx->pc = 0x1F7130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F712Cu;
            // 0x1f7130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7134u; }
        if (ctx->pc != 0x1F7134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7134u; }
        if (ctx->pc != 0x1F7134u) { return; }
    }
    ctx->pc = 0x1F7134u;
label_1f7134:
    // 0x1f7134: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1F7134u;
    SET_GPR_U32(ctx, 31, 0x1F713Cu);
    ctx->pc = 0x1F7138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7134u;
            // 0x1f7138: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F713Cu; }
        if (ctx->pc != 0x1F713Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F713Cu; }
        if (ctx->pc != 0x1F713Cu) { return; }
    }
    ctx->pc = 0x1F713Cu;
label_1f713c:
    // 0x1f713c: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x1f713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f7140: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f7140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f7144: 0x8f828f78  lw          $v0, -0x7088($gp)
    ctx->pc = 0x1f7144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938488)));
    // 0x1f7148: 0x2484001a  addiu       $a0, $a0, 0x1A
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26));
    // 0x1f714c: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1f7150: 0x28810200  slti        $at, $a0, 0x200
    ctx->pc = 0x1f7150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1f7154: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F7154u;
    {
        const bool branch_taken_0x1f7154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7154u;
            // 0x1f7158: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7154) {
            ctx->pc = 0x1F7234u;
            goto label_1f7234;
        }
    }
    ctx->pc = 0x1F715Cu;
    // 0x1f715c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f715cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f7160: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f7160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f7164: 0x8c258e40  lw          $a1, -0x71C0($at)
    ctx->pc = 0x1f7164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938176)));
    // 0x1f7168: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F7168u;
    SET_GPR_U32(ctx, 31, 0x1F7170u);
    ctx->pc = 0x1F716Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7168u;
            // 0x1f716c: 0xafb101a0  sw          $s1, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7170u; }
        if (ctx->pc != 0x1F7170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7170u; }
        if (ctx->pc != 0x1F7170u) { return; }
    }
    ctx->pc = 0x1F7170u;
label_1f7170:
    // 0x1f7170: 0xc04a422  jal         func_129088
    ctx->pc = 0x1F7170u;
    SET_GPR_U32(ctx, 31, 0x1F7178u);
    ctx->pc = 0x1F7174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7170u;
            // 0x1f7174: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7178u; }
        if (ctx->pc != 0x1F7178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7178u; }
        if (ctx->pc != 0x1F7178u) { return; }
    }
    ctx->pc = 0x1F7178u;
label_1f7178:
    // 0x1f7178: 0x8fa601b4  lw          $a2, 0x1B4($sp)
    ctx->pc = 0x1f7178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1f717c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f717cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f7180: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f7184: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f7188: 0x8c258e40  lw          $a1, -0x71C0($at)
    ctx->pc = 0x1f7188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938176)));
    // 0x1f718c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1f718cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7190: 0x2463006e  addiu       $v1, $v1, 0x6E
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
    // 0x1f7194: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1f7194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f7198: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1f719c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F719Cu;
    SET_GPR_U32(ctx, 31, 0x1F71A4u);
    ctx->pc = 0x1F71A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F719Cu;
            // 0x1f71a0: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71A4u; }
        if (ctx->pc != 0x1F71A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71A4u; }
        if (ctx->pc != 0x1F71A4u) { return; }
    }
    ctx->pc = 0x1F71A4u;
label_1f71a4:
    // 0x1f71a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f71a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f71a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f71ac: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F71ACu;
    SET_GPR_U32(ctx, 31, 0x1F71B4u);
    ctx->pc = 0x1F71B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71ACu;
            // 0x1f71b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71B4u; }
        if (ctx->pc != 0x1F71B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71B4u; }
        if (ctx->pc != 0x1F71B4u) { return; }
    }
    ctx->pc = 0x1F71B4u;
label_1f71b4:
    // 0x1f71b4: 0x27b501a4  addiu       $s5, $sp, 0x1A4
    ctx->pc = 0x1f71b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x1f71b8: 0x27b601a8  addiu       $s6, $sp, 0x1A8
    ctx->pc = 0x1f71b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1f71bc: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1f71bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f71c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f71c4: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1f71c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f71c8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F71C8u;
    SET_GPR_U32(ctx, 31, 0x1F71D0u);
    ctx->pc = 0x1F71CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71C8u;
            // 0x1f71cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71D0u; }
        if (ctx->pc != 0x1F71D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71D0u; }
        if (ctx->pc != 0x1F71D0u) { return; }
    }
    ctx->pc = 0x1F71D0u;
label_1f71d0:
    // 0x1f71d0: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f71d4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1f71d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1f71d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f71dc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1f71dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f71e0: 0x24540034  addiu       $s4, $v0, 0x34
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_1f71e4:
    // 0x1f71e4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f71e8: 0x24428e40  addiu       $v0, $v0, -0x71C0
    ctx->pc = 0x1f71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
    // 0x1f71ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f71f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f71f4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F71F4u;
    SET_GPR_U32(ctx, 31, 0x1F71FCu);
    ctx->pc = 0x1F71F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F71F4u;
            // 0x1f71f8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71FCu; }
        if (ctx->pc != 0x1F71FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F71FCu; }
        if (ctx->pc != 0x1F71FCu) { return; }
    }
    ctx->pc = 0x1F71FCu;
label_1f71fc:
    // 0x1f71fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f7200: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7204: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x1F7204u;
    SET_GPR_U32(ctx, 31, 0x1F720Cu);
    ctx->pc = 0x1F7208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7204u;
            // 0x1f7208: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F720Cu; }
        if (ctx->pc != 0x1F720Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F720Cu; }
        if (ctx->pc != 0x1F720Cu) { return; }
    }
    ctx->pc = 0x1F720Cu;
label_1f720c:
    // 0x1f720c: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x1f720cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f7210: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f7210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f7214: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x1f7214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f7218: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x1F7218u;
    SET_GPR_U32(ctx, 31, 0x1F7220u);
    ctx->pc = 0x1F721Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7218u;
            // 0x1f721c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7220u; }
        if (ctx->pc != 0x1F7220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7220u; }
        if (ctx->pc != 0x1F7220u) { return; }
    }
    ctx->pc = 0x1F7220u;
label_1f7220:
    // 0x1f7220: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7224: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1f7224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1f7228: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x1f7228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f722c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F722Cu;
    {
        const bool branch_taken_0x1f722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F722Cu;
            // 0x1f7230: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f722c) {
            ctx->pc = 0x1F71E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f71e4;
        }
    }
    ctx->pc = 0x1F7234u;
label_1f7234:
    // 0x1f7234: 0x0  nop
    ctx->pc = 0x1f7234u;
    // NOP
    // 0x1f7238: 0xc088070  jal         func_2201C0
    ctx->pc = 0x1F7238u;
    SET_GPR_U32(ctx, 31, 0x1F7240u);
    ctx->pc = 0x2201C0u;
    if (runtime->hasFunction(0x2201C0u)) {
        auto targetFn = runtime->lookupFunction(0x2201C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7240u; }
        if (ctx->pc != 0x1F7240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMenuScissor__Fv_0x2201c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7240u; }
        if (ctx->pc != 0x1F7240u) { return; }
    }
    ctx->pc = 0x1F7240u;
label_1f7240:
    // 0x1f7240: 0x8f828f7c  lw          $v0, -0x7084($gp)
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938492)));
    // 0x1f7244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7244u;
    {
        const bool branch_taken_0x1f7244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7244u;
            // 0x1f7248: 0x27848f80  addiu       $a0, $gp, -0x7080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7244) {
            ctx->pc = 0x1F7264u;
            goto label_1f7264;
        }
    }
    ctx->pc = 0x1F724Cu;
    // 0x1f724c: 0x27848f80  addiu       $a0, $gp, -0x7080
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938496));
    // 0x1f7250: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x1f7250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x1f7254: 0xc094558  jal         func_251560
    ctx->pc = 0x1F7254u;
    SET_GPR_U32(ctx, 31, 0x1F725Cu);
    ctx->pc = 0x1F7258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7254u;
            // 0x1f7258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F725Cu; }
        if (ctx->pc != 0x1F725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F725Cu; }
        if (ctx->pc != 0x1F725Cu) { return; }
    }
    ctx->pc = 0x1F725Cu;
label_1f725c:
    // 0x1f725c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F725Cu;
    {
        const bool branch_taken_0x1f725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F725Cu;
            // 0x1f7260: 0x8e690000  lw          $t1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f725c) {
            ctx->pc = 0x1F7274u;
            goto label_1f7274;
        }
    }
    ctx->pc = 0x1F7264u;
label_1f7264:
    // 0x1f7264: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f7264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f7268: 0xc094558  jal         func_251560
    ctx->pc = 0x1F7268u;
    SET_GPR_U32(ctx, 31, 0x1F7270u);
    ctx->pc = 0x1F726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7268u;
            // 0x1f726c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7270u; }
        if (ctx->pc != 0x1F7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7270u; }
        if (ctx->pc != 0x1F7270u) { return; }
    }
    ctx->pc = 0x1F7270u;
label_1f7270:
    // 0x1f7270: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x1f7270u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f7274:
    // 0x1f7274: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1f7274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1f7278: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x1f7278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1f727c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1f727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f7280: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x1f7280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f7284: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1f7284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f7288: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1f728c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f728cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7290: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x1f7290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1f7294: 0x8f938f80  lw          $s3, -0x7080($gp)
    ctx->pc = 0x1f7294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    // 0x1f7298: 0x2531001e  addiu       $s1, $t1, 0x1E
    ctx->pc = 0x1f7298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 30));
    // 0x1f729c: 0x253200be  addiu       $s2, $t1, 0xBE
    ctx->pc = 0x1f729cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 190));
    // 0x1f72a0: 0x245000d2  addiu       $s0, $v0, 0xD2
    ctx->pc = 0x1f72a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 210));
    // 0x1f72a4: 0x730018  mult        $zero, $v1, $s3
    ctx->pc = 0x1f72a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f72a8: 0x0  nop
    ctx->pc = 0x1f72a8u;
    // NOP
    // 0x1f72ac: 0x0  nop
    ctx->pc = 0x1f72acu;
    // NOP
    // 0x1f72b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1f72b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f72b4: 0x131fc2  srl         $v1, $s3, 31
    ctx->pc = 0x1f72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x1f72b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F72B8u;
    SET_GPR_U32(ctx, 31, 0x1F72C0u);
    ctx->pc = 0x1F72BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72B8u;
            // 0x1f72bc: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72C0u; }
        if (ctx->pc != 0x1F72C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72C0u; }
        if (ctx->pc != 0x1F72C0u) { return; }
    }
    ctx->pc = 0x1F72C0u;
label_1f72c0:
    // 0x1f72c0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1f72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f72c4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f72c8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x1f72c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1f72cc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f72ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f72d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F72D0u;
    SET_GPR_U32(ctx, 31, 0x1F72D8u);
    ctx->pc = 0x1F72D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72D0u;
            // 0x1f72d4: 0x24080017  addiu       $t0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72D8u; }
        if (ctx->pc != 0x1F72D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72D8u; }
        if (ctx->pc != 0x1F72D8u) { return; }
    }
    ctx->pc = 0x1F72D8u;
label_1f72d8:
    // 0x1f72d8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f72dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f72e0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f72e4: 0x24a58a30  addiu       $a1, $a1, -0x75D0
    ctx->pc = 0x1f72e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
    // 0x1f72e8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F72E8u;
    SET_GPR_U32(ctx, 31, 0x1F72F0u);
    ctx->pc = 0x1F72ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F72E8u;
            // 0x1f72ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72F0u; }
        if (ctx->pc != 0x1F72F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F72F0u; }
        if (ctx->pc != 0x1F72F0u) { return; }
    }
    ctx->pc = 0x1F72F0u;
label_1f72f0:
    // 0x1f72f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f72f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72f4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f72f8: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x1f72f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1f72fc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1f72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1f7300: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f7304: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F7304u;
    SET_GPR_U32(ctx, 31, 0x1F730Cu);
    ctx->pc = 0x1F7308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7304u;
            // 0x1f7308: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F730Cu; }
        if (ctx->pc != 0x1F730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F730Cu; }
        if (ctx->pc != 0x1F730Cu) { return; }
    }
    ctx->pc = 0x1F730Cu;
label_1f730c:
    // 0x1f730c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f730cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7310: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1f7314: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1f7314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f7318: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f7318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f731c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f731cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f7320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7324: 0xc088004  jal         func_220010
    ctx->pc = 0x1F7324u;
    SET_GPR_U32(ctx, 31, 0x1F732Cu);
    ctx->pc = 0x1F7328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7324u;
            // 0x1f7328: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F732Cu; }
        if (ctx->pc != 0x1F732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F732Cu; }
        if (ctx->pc != 0x1F732Cu) { return; }
    }
    ctx->pc = 0x1F732Cu;
label_1f732c:
    // 0x1f732c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f732cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7330: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x1f7330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1f7334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f7334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7338: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1f7338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f733c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F733Cu;
    SET_GPR_U32(ctx, 31, 0x1F7344u);
    ctx->pc = 0x1F7340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F733Cu;
            // 0x1f7340: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7344u; }
        if (ctx->pc != 0x1F7344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7344u; }
        if (ctx->pc != 0x1F7344u) { return; }
    }
    ctx->pc = 0x1F7344u;
label_1f7344:
    // 0x1f7344: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f7348: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f734c: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x1f734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1f7350: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1f7350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1f7354: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7358: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f7358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f735c: 0xc088004  jal         func_220010
    ctx->pc = 0x1F735Cu;
    SET_GPR_U32(ctx, 31, 0x1F7364u);
    ctx->pc = 0x1F7360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F735Cu;
            // 0x1f7360: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7364u; }
        if (ctx->pc != 0x1F7364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7364u; }
        if (ctx->pc != 0x1F7364u) { return; }
    }
    ctx->pc = 0x1F7364u;
label_1f7364:
    // 0x1f7364: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1f7364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f7368: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f736c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f7370: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1f7370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f7374: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F7374u;
    SET_GPR_U32(ctx, 31, 0x1F737Cu);
    ctx->pc = 0x1F7378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7374u;
            // 0x1f7378: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F737Cu; }
        if (ctx->pc != 0x1F737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F737Cu; }
        if (ctx->pc != 0x1F737Cu) { return; }
    }
    ctx->pc = 0x1F737Cu;
label_1f737c:
    // 0x1f737c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f737cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f7380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7384: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1f7384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f7388: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f738c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f738cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f7390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7394: 0xc088004  jal         func_220010
    ctx->pc = 0x1F7394u;
    SET_GPR_U32(ctx, 31, 0x1F739Cu);
    ctx->pc = 0x1F7398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7394u;
            // 0x1f7398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F739Cu; }
        if (ctx->pc != 0x1F739Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F739Cu; }
        if (ctx->pc != 0x1F739Cu) { return; }
    }
    ctx->pc = 0x1F739Cu;
label_1f739c:
    // 0x1f739c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f739cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f73a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73a4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f73a8: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f73ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F73ACu;
    SET_GPR_U32(ctx, 31, 0x1F73B4u);
    ctx->pc = 0x1F73B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F73ACu;
            // 0x1f73b0: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73B4u; }
        if (ctx->pc != 0x1F73B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73B4u; }
        if (ctx->pc != 0x1F73B4u) { return; }
    }
    ctx->pc = 0x1F73B4u;
label_1f73b4:
    // 0x1f73b4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f73b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f73b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f73b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f73bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73c0: 0x27a502c0  addiu       $a1, $sp, 0x2C0
    ctx->pc = 0x1f73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f73c4: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f73c8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f73c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73cc: 0xc088004  jal         func_220010
    ctx->pc = 0x1F73CCu;
    SET_GPR_U32(ctx, 31, 0x1F73D4u);
    ctx->pc = 0x1F73D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F73CCu;
            // 0x1f73d0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73D4u; }
        if (ctx->pc != 0x1F73D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F73D4u; }
        if (ctx->pc != 0x1F73D4u) { return; }
    }
    ctx->pc = 0x1F73D4u;
label_1f73d4:
    // 0x1f73d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f73d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f73d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f73d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f73dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f73dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f73e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f73e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f73e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f73e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f73e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f73e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f73ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f73ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f73f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f73f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f73f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F73F4u;
            // 0x1f73f8: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F73FCu;
}
