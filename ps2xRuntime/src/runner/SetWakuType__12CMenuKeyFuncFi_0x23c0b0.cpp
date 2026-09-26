#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWakuType__12CMenuKeyFuncFi
// Address: 0x23c0b0 - 0x23c154
void SetWakuType__12CMenuKeyFuncFi_0x23c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWakuType__12CMenuKeyFuncFi_0x23c0b0");
#endif

    switch (ctx->pc) {
        case 0x23c0d4u: goto label_23c0d4;
        case 0x23c0e8u: goto label_23c0e8;
        case 0x23c0f4u: goto label_23c0f4;
        default: break;
    }

    ctx->pc = 0x23c0b0u;

    // 0x23c0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23c0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23c0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c0c0: 0xa4850068  sh          $a1, 0x68($a0)
    ctx->pc = 0x23c0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x23c0c4: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x23c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x23c0c8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23C0C8u;
    {
        const bool branch_taken_0x23c0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0C8u;
            // 0x23c0cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0c8) {
            ctx->pc = 0x23C140u;
            goto label_23c140;
        }
    }
    ctx->pc = 0x23C0D0u;
    // 0x23c0d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23c0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23c0d4:
    // 0x23c0d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23c0d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c0dc: 0x24a5ac48  addiu       $a1, $a1, -0x53B8
    ctx->pc = 0x23c0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945864));
    // 0x23c0e0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x23C0E0u;
    SET_GPR_U32(ctx, 31, 0x23C0E8u);
    ctx->pc = 0x23C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0E0u;
            // 0x23c0e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0E8u; }
        if (ctx->pc != 0x23C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0E8u; }
        if (ctx->pc != 0x23C0E8u) { return; }
    }
    ctx->pc = 0x23C0E8u;
label_23c0e8:
    // 0x23c0e8: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x23c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x23c0ec: 0xc089664  jal         func_225990
    ctx->pc = 0x23C0ECu;
    SET_GPR_U32(ctx, 31, 0x23C0F4u);
    ctx->pc = 0x23C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0ECu;
            // 0x23c0f0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0F4u; }
        if (ctx->pc != 0x23C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C0F4u; }
        if (ctx->pc != 0x23C0F4u) { return; }
    }
    ctx->pc = 0x23C0F4u;
label_23c0f4:
    // 0x23c0f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C0F4u;
    {
        const bool branch_taken_0x23c0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c0f4) {
            ctx->pc = 0x23C110u;
            goto label_23c110;
        }
    }
    ctx->pc = 0x23C0FCu;
    // 0x23c0fc: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x23c0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c100: 0x86030068  lh          $v1, 0x68($s0)
    ctx->pc = 0x23c100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x23c104: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C104u;
    {
        const bool branch_taken_0x23c104 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x23C108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C104u;
            // 0x23c108: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c104) {
            ctx->pc = 0x23C110u;
            goto label_23c110;
        }
    }
    ctx->pc = 0x23C10Cu;
    // 0x23c10c: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x23c10cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_23c110:
    // 0x23c110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23c110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23c114: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x23c114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23c118: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x23C118u;
    {
        const bool branch_taken_0x23c118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c118) {
            ctx->pc = 0x23C0D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23c0d4;
        }
    }
    ctx->pc = 0x23C120u;
    // 0x23c120: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x23c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x23c124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c128: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23c128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23c12c: 0x86030068  lh          $v1, 0x68($s0)
    ctx->pc = 0x23c12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x23c130: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C130u;
    {
        const bool branch_taken_0x23c130 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23c130) {
            ctx->pc = 0x23C140u;
            goto label_23c140;
        }
    }
    ctx->pc = 0x23C138u;
    // 0x23c138: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x23c138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x23c13c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x23c13cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_23c140:
    // 0x23c140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23c144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c14c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23C14Cu;
            // 0x23c150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C154u;
}
