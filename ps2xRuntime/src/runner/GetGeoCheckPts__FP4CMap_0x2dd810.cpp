#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGeoCheckPts__FP4CMap
// Address: 0x2dd810 - 0x2dd840
void GetGeoCheckPts__FP4CMap_0x2dd810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGeoCheckPts__FP4CMap_0x2dd810");
#endif

    switch (ctx->pc) {
        case 0x2dd828u: goto label_2dd828;
        default: break;
    }

    ctx->pc = 0x2dd810u;

    // 0x2dd810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd814: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD814u;
    {
        const bool branch_taken_0x2dd814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD814u;
            // 0x2dd818: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd814) {
            ctx->pc = 0x2DD830u;
            goto label_2dd830;
        }
    }
    ctx->pc = 0x2DD81Cu;
    // 0x2dd81c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dd81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2dd820: 0xc057508  jal         func_15D420
    ctx->pc = 0x2DD820u;
    SET_GPR_U32(ctx, 31, 0x2DD828u);
    ctx->pc = 0x2DD824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD820u;
            // 0x2dd824: 0x24a50f00  addiu       $a1, $a1, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD828u; }
        if (ctx->pc != 0x2DD828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD828u; }
        if (ctx->pc != 0x2DD828u) { return; }
    }
    ctx->pc = 0x2DD828u;
label_2dd828:
    // 0x2dd828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD828u;
    {
        const bool branch_taken_0x2dd828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD828u;
            // 0x2dd82c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd828) {
            ctx->pc = 0x2DD838u;
            goto label_2dd838;
        }
    }
    ctx->pc = 0x2DD830u;
label_2dd830:
    // 0x2dd830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd838:
    // 0x2dd838: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD838u;
            // 0x2dd83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD840u;
}
