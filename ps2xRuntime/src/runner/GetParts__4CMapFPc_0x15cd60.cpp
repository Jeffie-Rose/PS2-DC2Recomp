#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetParts__4CMapFPc
// Address: 0x15cd60 - 0x15cdf4
void GetParts__4CMapFPc_0x15cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetParts__4CMapFPc_0x15cd60");
#endif

    switch (ctx->pc) {
        case 0x15cda0u: goto label_15cda0;
        case 0x15cdb8u: goto label_15cdb8;
        default: break;
    }

    ctx->pc = 0x15cd60u;

    // 0x15cd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15cd64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cd70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd74: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CD74u;
    {
        const bool branch_taken_0x15cd74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD74u;
            // 0x15cd78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd74) {
            ctx->pc = 0x15CD88u;
            goto label_15cd88;
        }
    }
    ctx->pc = 0x15CD7Cu;
    // 0x15cd7c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15cd80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CD80u;
    {
        const bool branch_taken_0x15cd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cd80) {
            ctx->pc = 0x15CD90u;
            goto label_15cd90;
        }
    }
    ctx->pc = 0x15CD88u;
label_15cd88:
    // 0x15cd88: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15CD88u;
    {
        const bool branch_taken_0x15cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD88u;
            // 0x15cd8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd88) {
            ctx->pc = 0x15CDDCu;
            goto label_15cddc;
        }
    }
    ctx->pc = 0x15CD90u;
label_15cd90:
    // 0x15cd90: 0x8c900104  lw          $s0, 0x104($a0)
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x15cd94: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x15CD94u;
    {
        const bool branch_taken_0x15cd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd94) {
            ctx->pc = 0x15CDD4u;
            goto label_15cdd4;
        }
    }
    ctx->pc = 0x15CD9Cu;
    // 0x15cd9c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x15cd9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15cda0:
    // 0x15cda0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CDA0u;
    {
        const bool branch_taken_0x15cda0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDA0u;
            // 0x15cda4: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cda0) {
            ctx->pc = 0x15CDC8u;
            goto label_15cdc8;
        }
    }
    ctx->pc = 0x15CDA8u;
    // 0x15cda8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15CDA8u;
    {
        const bool branch_taken_0x15cda8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDA8u;
            // 0x15cdac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cda8) {
            ctx->pc = 0x15CDC8u;
            goto label_15cdc8;
        }
    }
    ctx->pc = 0x15CDB0u;
    // 0x15cdb0: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x15CDB0u;
    SET_GPR_U32(ctx, 31, 0x15CDB8u);
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDB8u; }
        if (ctx->pc != 0x15CDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDB8u; }
        if (ctx->pc != 0x15CDB8u) { return; }
    }
    ctx->pc = 0x15CDB8u;
label_15cdb8:
    // 0x15cdb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CDB8u;
    {
        const bool branch_taken_0x15cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDB8u;
            // 0x15cdbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb8) {
            ctx->pc = 0x15CDC8u;
            goto label_15cdc8;
        }
    }
    ctx->pc = 0x15CDC0u;
    // 0x15cdc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15CDC0u;
    {
        const bool branch_taken_0x15cdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDC0u;
            // 0x15cdc4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdc0) {
            ctx->pc = 0x15CDE0u;
            goto label_15cde0;
        }
    }
    ctx->pc = 0x15CDC8u;
label_15cdc8:
    // 0x15cdc8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15cdc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15cdcc: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15CDCCu;
    {
        const bool branch_taken_0x15cdcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDCCu;
            // 0x15cdd0: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdcc) {
            ctx->pc = 0x15CDA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cda0;
        }
    }
    ctx->pc = 0x15CDD4u;
label_15cdd4:
    // 0x15cdd4: 0x0  nop
    ctx->pc = 0x15cdd4u;
    // NOP
    // 0x15cdd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15cdd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cddc:
    // 0x15cddc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15cde0:
    // 0x15cde0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15cde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cde4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cde8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cdec: 0x3e00008  jr          $ra
    ctx->pc = 0x15CDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDECu;
            // 0x15cdf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CDF4u;
}
