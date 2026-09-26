#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetOpenAttribute__18CMemoryCardManagerFPc
// Address: 0x2f18b0 - 0x2f1928
void GetOpenAttribute__18CMemoryCardManagerFPc_0x2f18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOpenAttribute__18CMemoryCardManagerFPc_0x2f18b0");
#endif

    switch (ctx->pc) {
        case 0x2f18d8u: goto label_2f18d8;
        case 0x2f18e8u: goto label_2f18e8;
        default: break;
    }

    ctx->pc = 0x2f18b0u;

    // 0x2f18b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f18b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f18b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f18bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f18bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f18c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f18c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f18c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f18c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f18d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f18d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f18d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f18d8:
    // 0x2f18d8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2f18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2f18dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f18dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18e0: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2F18E0u;
    SET_GPR_U32(ctx, 31, 0x2F18E8u);
    ctx->pc = 0x2F18E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18E0u;
            // 0x2f18e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18E8u; }
        if (ctx->pc != 0x2F18E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18E8u; }
        if (ctx->pc != 0x2F18E8u) { return; }
    }
    ctx->pc = 0x2F18E8u;
label_2f18e8:
    // 0x2f18e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F18E8u;
    {
        const bool branch_taken_0x2f18e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F18ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18E8u;
            // 0x2f18ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18e8) {
            ctx->pc = 0x2F18F8u;
            goto label_2f18f8;
        }
    }
    ctx->pc = 0x2F18F0u;
    // 0x2f18f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F18F0u;
    {
        const bool branch_taken_0x2f18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F18F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18F0u;
            // 0x2f18f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f18f0) {
            ctx->pc = 0x2F1910u;
            goto label_2f1910;
        }
    }
    ctx->pc = 0x2F18F8u;
label_2f18f8:
    // 0x2f18f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f18f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f18fc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x2f18fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2f1900: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F1900u;
    {
        const bool branch_taken_0x2f1900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1900u;
            // 0x2f1904: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1900) {
            ctx->pc = 0x2F18D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f18d8;
        }
    }
    ctx->pc = 0x2F1908u;
    // 0x2f1908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f190c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1910:
    // 0x2f1910: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f1910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f1914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f1918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f191c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f191cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1920: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1920u;
            // 0x2f1924: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1928u;
}
