#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGaijiFontNo__5CFontFPc
// Address: 0x2d4670 - 0x2d46b8
void GetGaijiFontNo__5CFontFPc_0x2d4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGaijiFontNo__5CFontFPc_0x2d4670");
#endif

    switch (ctx->pc) {
        case 0x2d4680u: goto label_2d4680;
        default: break;
    }

    ctx->pc = 0x2d4670u;

    // 0x2d4670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4678: 0xc0b517c  jal         func_2D45F0
    ctx->pc = 0x2D4678u;
    SET_GPR_U32(ctx, 31, 0x2D4680u);
    ctx->pc = 0x2D467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4678u;
            // 0x2d467c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D45F0u;
    if (runtime->hasFunction(0x2D45F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D45F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4680u; }
        if (ctx->pc != 0x2D4680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCodeNo__FPc_0x2d45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4680u; }
        if (ctx->pc != 0x2D4680u) { return; }
    }
    ctx->pc = 0x2D4680u;
label_2d4680:
    // 0x2d4680: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4680u;
    {
        const bool branch_taken_0x2d4680 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D4684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4680u;
            // 0x2d4684: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4680) {
            ctx->pc = 0x2D4690u;
            goto label_2d4690;
        }
    }
    ctx->pc = 0x2D4688u;
    // 0x2d4688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D4688u;
    {
        const bool branch_taken_0x2d4688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4688u;
            // 0x2d468c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4688) {
            ctx->pc = 0x2D46ACu;
            goto label_2d46ac;
        }
    }
    ctx->pc = 0x2D4690u;
label_2d4690:
    // 0x2d4690: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2d4694: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d4698: 0x24636b68  addiu       $v1, $v1, 0x6B68
    ctx->pc = 0x2d4698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27496));
    // 0x2d469c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d469cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d46a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d46a4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d46a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d46a8: 0x0  nop
    ctx->pc = 0x2d46a8u;
    // NOP
label_2d46ac:
    // 0x2d46ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d46acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d46b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D46B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46B0u;
            // 0x2d46b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D46B8u;
}
