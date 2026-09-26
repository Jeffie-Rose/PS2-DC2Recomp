#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCopyString__FPcP9mgCMemory
// Address: 0x139e80 - 0x139f08
void mgCopyString__FPcP9mgCMemory_0x139e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCopyString__FPcP9mgCMemory_0x139e80");
#endif

    switch (ctx->pc) {
        case 0x139eb4u: goto label_139eb4;
        case 0x139ed4u: goto label_139ed4;
        case 0x139ef0u: goto label_139ef0;
        default: break;
    }

    ctx->pc = 0x139e80u;

    // 0x139e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e94: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E94u;
    {
        const bool branch_taken_0x139e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E94u;
            // 0x139e98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e94) {
            ctx->pc = 0x139EA4u;
            goto label_139ea4;
        }
    }
    ctx->pc = 0x139E9Cu;
    // 0x139e9c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E9Cu;
    {
        const bool branch_taken_0x139e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x139e9c) {
            ctx->pc = 0x139EACu;
            goto label_139eac;
        }
    }
    ctx->pc = 0x139EA4u;
label_139ea4:
    // 0x139ea4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x139EA4u;
    {
        const bool branch_taken_0x139ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139EA4u;
            // 0x139ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ea4) {
            ctx->pc = 0x139EF4u;
            goto label_139ef4;
        }
    }
    ctx->pc = 0x139EACu;
label_139eac:
    // 0x139eac: 0xc04a422  jal         func_129088
    ctx->pc = 0x139EACu;
    SET_GPR_U32(ctx, 31, 0x139EB4u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139EB4u; }
        if (ctx->pc != 0x139EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139EB4u; }
        if (ctx->pc != 0x139EB4u) { return; }
    }
    ctx->pc = 0x139EB4u;
label_139eb4:
    // 0x139eb4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139eb8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x139eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x139ebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139EBCu;
    {
        const bool branch_taken_0x139ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139EBCu;
            // 0x139ec0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ebc) {
            ctx->pc = 0x139ECCu;
            goto label_139ecc;
        }
    }
    ctx->pc = 0x139EC4u;
    // 0x139ec4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x139ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x139ec8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_139ecc:
    // 0x139ecc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x139ECCu;
    SET_GPR_U32(ctx, 31, 0x139ED4u);
    ctx->pc = 0x139ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139ECCu;
            // 0x139ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139ED4u; }
        if (ctx->pc != 0x139ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139ED4u; }
        if (ctx->pc != 0x139ED4u) { return; }
    }
    ctx->pc = 0x139ED4u;
label_139ed4:
    // 0x139ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ed8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139ED8u;
    {
        const bool branch_taken_0x139ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x139EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139ED8u;
            // 0x139edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ed8) {
            ctx->pc = 0x139EE8u;
            goto label_139ee8;
        }
    }
    ctx->pc = 0x139EE0u;
    // 0x139ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139EE0u;
    {
        const bool branch_taken_0x139ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139EE0u;
            // 0x139ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ee0) {
            ctx->pc = 0x139EF4u;
            goto label_139ef4;
        }
    }
    ctx->pc = 0x139EE8u;
label_139ee8:
    // 0x139ee8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x139EE8u;
    SET_GPR_U32(ctx, 31, 0x139EF0u);
    ctx->pc = 0x139EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139EE8u;
            // 0x139eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139EF0u; }
        if (ctx->pc != 0x139EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139EF0u; }
        if (ctx->pc != 0x139EF0u) { return; }
    }
    ctx->pc = 0x139EF0u;
label_139ef0:
    // 0x139ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139ef4:
    // 0x139ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f00: 0x3e00008  jr          $ra
    ctx->pc = 0x139F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F00u;
            // 0x139f04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139F08u;
}
