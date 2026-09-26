#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFIX_CAMERA_END__FP9SPI_STACKi
// Address: 0x163400 - 0x16343c
void mapFIX_CAMERA_END__FP9SPI_STACKi_0x163400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFIX_CAMERA_END__FP9SPI_STACKi_0x163400");
#endif

    switch (ctx->pc) {
        case 0x163410u: goto label_163410;
        default: break;
    }

    ctx->pc = 0x163400u;

    // 0x163400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163408: 0xc058720  jal         func_161C80
    ctx->pc = 0x163408u;
    SET_GPR_U32(ctx, 31, 0x163410u);
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163410u; }
        if (ctx->pc != 0x163410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163410u; }
        if (ctx->pc != 0x163410u) { return; }
    }
    ctx->pc = 0x163410u;
label_163410:
    // 0x163410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163410u;
    {
        const bool branch_taken_0x163410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163410u;
            // 0x163414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163410) {
            ctx->pc = 0x163420u;
            goto label_163420;
        }
    }
    ctx->pc = 0x163418u;
    // 0x163418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x163418u;
    {
        const bool branch_taken_0x163418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16341Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163418u;
            // 0x16341c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163418) {
            ctx->pc = 0x163434u;
            goto label_163434;
        }
    }
    ctx->pc = 0x163420u;
label_163420:
    // 0x163420: 0x8f838934  lw          $v1, -0x76CC($gp)
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
    // 0x163424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16342c: 0xaf838934  sw          $v1, -0x76CC($gp)
    ctx->pc = 0x16342cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 3));
    // 0x163430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163434:
    // 0x163434: 0x3e00008  jr          $ra
    ctx->pc = 0x163434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163434u;
            // 0x163438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16343Cu;
}
