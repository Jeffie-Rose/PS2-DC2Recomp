#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartInfo__16CMenuPosDataFormFPc
// Address: 0x225990 - 0x225a24
void GetPartInfo__16CMenuPosDataFormFPc_0x225990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartInfo__16CMenuPosDataFormFPc_0x225990");
#endif

    switch (ctx->pc) {
        case 0x2259bcu: goto label_2259bc;
        case 0x2259d0u: goto label_2259d0;
        default: break;
    }

    ctx->pc = 0x225990u;

    // 0x225990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x225998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22599c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2259a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2259a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2259a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2259a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2259a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2259acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2259b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2259b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2259B4u;
    {
        const bool branch_taken_0x2259b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2259B4u;
            // 0x2259b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259b4) {
            ctx->pc = 0x2259F8u;
            goto label_2259f8;
        }
    }
    ctx->pc = 0x2259BCu;
label_2259bc:
    // 0x2259bc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x2259bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2259c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2259c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2259c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2259c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2259c8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2259C8u;
    SET_GPR_U32(ctx, 31, 0x2259D0u);
    ctx->pc = 0x2259CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2259C8u;
            // 0x2259cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259D0u; }
        if (ctx->pc != 0x2259D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259D0u; }
        if (ctx->pc != 0x2259D0u) { return; }
    }
    ctx->pc = 0x2259D0u;
label_2259d0:
    // 0x2259d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2259D0u;
    {
        const bool branch_taken_0x2259d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2259d0) {
            ctx->pc = 0x2259F0u;
            goto label_2259f0;
        }
    }
    ctx->pc = 0x2259D8u;
    // 0x2259d8: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x2259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x2259dc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2259dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2259e0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2259e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2259e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2259e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2259E8u;
    {
        const bool branch_taken_0x2259e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2259ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2259E8u;
            // 0x2259ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2259e8) {
            ctx->pc = 0x225A08u;
            goto label_225a08;
        }
    }
    ctx->pc = 0x2259F0u;
label_2259f0:
    // 0x2259f0: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2259f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2259f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2259f8:
    // 0x2259f8: 0x86620068  lh          $v0, 0x68($s3)
    ctx->pc = 0x2259f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2259fc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2259fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225a00: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x225A00u;
    {
        const bool branch_taken_0x225a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A00u;
            // 0x225a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a00) {
            ctx->pc = 0x2259BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2259bc;
        }
    }
    ctx->pc = 0x225A08u;
label_225a08:
    // 0x225a08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225a0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x225a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x225A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A1Cu;
            // 0x225a20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A24u;
}
