#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReadBGFile__FPc
// Address: 0x148bf0 - 0x148c64
void GetReadBGFile__FPc_0x148bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReadBGFile__FPc_0x148bf0");
#endif

    switch (ctx->pc) {
        case 0x148c14u: goto label_148c14;
        case 0x148c28u: goto label_148c28;
        default: break;
    }

    ctx->pc = 0x148bf0u;

    // 0x148bf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x148bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148bf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148bfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x148c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148c08: 0x3c11003d  lui         $s1, 0x3D
    ctx->pc = 0x148c08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)61 << 16));
    // 0x148c0c: 0x26318680  addiu       $s1, $s1, -0x7980
    ctx->pc = 0x148c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936192));
    // 0x148c10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x148c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148c14:
    // 0x148c14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148c18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148C18u;
    {
        const bool branch_taken_0x148c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C18u;
            // 0x148c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c18) {
            ctx->pc = 0x148C38u;
            goto label_148c38;
        }
    }
    ctx->pc = 0x148C20u;
    // 0x148c20: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x148C20u;
    SET_GPR_U32(ctx, 31, 0x148C28u);
    ctx->pc = 0x148C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C20u;
            // 0x148c24: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C28u; }
        if (ctx->pc != 0x148C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C28u; }
        if (ctx->pc != 0x148C28u) { return; }
    }
    ctx->pc = 0x148C28u;
label_148c28:
    // 0x148c28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148C28u;
    {
        const bool branch_taken_0x148c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C28u;
            // 0x148c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c28) {
            ctx->pc = 0x148C38u;
            goto label_148c38;
        }
    }
    ctx->pc = 0x148C30u;
    // 0x148c30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x148C30u;
    {
        const bool branch_taken_0x148c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C30u;
            // 0x148c34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c30) {
            ctx->pc = 0x148C50u;
            goto label_148c50;
        }
    }
    ctx->pc = 0x148C38u;
label_148c38:
    // 0x148c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148c3c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x148c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x148c40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x148C40u;
    {
        const bool branch_taken_0x148c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C40u;
            // 0x148c44: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148c40) {
            ctx->pc = 0x148C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148c14;
        }
    }
    ctx->pc = 0x148C48u;
    // 0x148c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x148c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_148c50:
    // 0x148c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x148C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148C5Cu;
            // 0x148c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148C64u;
}
