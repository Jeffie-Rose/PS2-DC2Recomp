#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCollisionModel__7CSphidaFP10MDS_HEADERP9mgCMemory
// Address: 0x2ebc60 - 0x2ebc98
void SetCollisionModel__7CSphidaFP10MDS_HEADERP9mgCMemory_0x2ebc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCollisionModel__7CSphidaFP10MDS_HEADERP9mgCMemory_0x2ebc60");
#endif

    switch (ctx->pc) {
        case 0x2ebc7cu: goto label_2ebc7c;
        default: break;
    }

    ctx->pc = 0x2ebc60u;

    // 0x2ebc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebc64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ebc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ebc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ebc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc74: 0xc051fdc  jal         func_147F70
    ctx->pc = 0x2EBC74u;
    SET_GPR_U32(ctx, 31, 0x2EBC7Cu);
    ctx->pc = 0x2EBC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC74u;
            // 0x2ebc78: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147F70u;
    if (runtime->hasFunction(0x147F70u)) {
        auto targetFn = runtime->lookupFunction(0x147F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC7Cu; }
        if (ctx->pc != 0x2EBC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCollisionFile__FP10MDS_HEADERP9mgCMemory_0x147f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC7Cu; }
        if (ctx->pc != 0x2EBC7Cu) { return; }
    }
    ctx->pc = 0x2EBC7Cu;
label_2ebc7c:
    // 0x2ebc7c: 0xae020208  sw          $v0, 0x208($s0)
    ctx->pc = 0x2ebc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 2));
    // 0x2ebc80: 0x8e020208  lw          $v0, 0x208($s0)
    ctx->pc = 0x2ebc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2ebc84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ebc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ebc8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ebc90: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC90u;
            // 0x2ebc94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBC98u;
}
