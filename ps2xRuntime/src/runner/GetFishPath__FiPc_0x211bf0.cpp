#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishPath__FiPc
// Address: 0x211bf0 - 0x211c44
void GetFishPath__FiPc_0x211bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishPath__FiPc_0x211bf0");
#endif

    switch (ctx->pc) {
        case 0x211c08u: goto label_211c08;
        case 0x211c30u: goto label_211c30;
        default: break;
    }

    ctx->pc = 0x211bf0u;

    // 0x211bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211bfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c00: 0xc06571c  jal         func_195C70
    ctx->pc = 0x211C00u;
    SET_GPR_U32(ctx, 31, 0x211C08u);
    ctx->pc = 0x211C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C00u;
            // 0x211c04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C08u; }
        if (ctx->pc != 0x211C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C08u; }
        if (ctx->pc != 0x211C08u) { return; }
    }
    ctx->pc = 0x211C08u;
label_211c08:
    // 0x211c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C08u;
    {
        const bool branch_taken_0x211c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211c08) {
            ctx->pc = 0x211C18u;
            goto label_211c18;
        }
    }
    ctx->pc = 0x211C10u;
    // 0x211c10: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x211C10u;
    {
        const bool branch_taken_0x211c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x211C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C10u;
            // 0x211c14: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c10) {
            ctx->pc = 0x211C20u;
            goto label_211c20;
        }
    }
    ctx->pc = 0x211C18u;
label_211c18:
    // 0x211c18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211C18u;
    {
        const bool branch_taken_0x211c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C18u;
            // 0x211c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211c18) {
            ctx->pc = 0x211C34u;
            goto label_211c34;
        }
    }
    ctx->pc = 0x211C20u;
label_211c20:
    // 0x211c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x211c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c28: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x211C28u;
    SET_GPR_U32(ctx, 31, 0x211C30u);
    ctx->pc = 0x211C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211C28u;
            // 0x211c2c: 0x24a59e50  addiu       $a1, $a1, -0x61B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C30u; }
        if (ctx->pc != 0x211C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211C30u; }
        if (ctx->pc != 0x211C30u) { return; }
    }
    ctx->pc = 0x211C30u;
label_211c30:
    // 0x211c30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211c34:
    // 0x211c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x211C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211C3Cu;
            // 0x211c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211C44u;
}
