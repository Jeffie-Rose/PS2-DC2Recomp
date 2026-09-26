#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuRoboPartsLightOff__FP8mgCFrame
// Address: 0x2baed0 - 0x2baf04
void MenuRoboPartsLightOff__FP8mgCFrame_0x2baed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuRoboPartsLightOff__FP8mgCFrame_0x2baed0");
#endif

    switch (ctx->pc) {
        case 0x2baee8u: goto label_2baee8;
        default: break;
    }

    ctx->pc = 0x2baed0u;

    // 0x2baed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2baed4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAED4u;
    {
        const bool branch_taken_0x2baed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAED4u;
            // 0x2baed8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baed4) {
            ctx->pc = 0x2BAEF8u;
            goto label_2baef8;
        }
    }
    ctx->pc = 0x2BAEDCu;
    // 0x2baedc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2baedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2baee0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2BAEE0u;
    SET_GPR_U32(ctx, 31, 0x2BAEE8u);
    ctx->pc = 0x2BAEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEE0u;
            // 0x2baee4: 0x24a5f4f0  addiu       $a1, $a1, -0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEE8u; }
        if (ctx->pc != 0x2BAEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAEE8u; }
        if (ctx->pc != 0x2BAEE8u) { return; }
    }
    ctx->pc = 0x2BAEE8u;
label_2baee8:
    // 0x2baee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAEE8u;
    {
        const bool branch_taken_0x2baee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baee8) {
            ctx->pc = 0x2BAEF8u;
            goto label_2baef8;
        }
    }
    ctx->pc = 0x2BAEF0u;
    // 0x2baef0: 0x8c4300f4  lw          $v1, 0xF4($v0)
    ctx->pc = 0x2baef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2baef4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2baef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_2baef8:
    // 0x2baef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAEFCu;
            // 0x2baf00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAF04u;
}
