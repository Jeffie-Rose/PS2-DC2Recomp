#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeletePhotoData__13CDC2AlbumDataFi
// Address: 0x1fe800 - 0x1fe83c
void DeletePhotoData__13CDC2AlbumDataFi_0x1fe800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeletePhotoData__13CDC2AlbumDataFi_0x1fe800");
#endif

    switch (ctx->pc) {
        case 0x1fe828u: goto label_1fe828;
        case 0x1fe830u: goto label_1fe830;
        default: break;
    }

    ctx->pc = 0x1fe800u;

    // 0x1fe800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe804: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FE804u;
    {
        const bool branch_taken_0x1fe804 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FE808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE804u;
            // 0x1fe808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe804) {
            ctx->pc = 0x1FE830u;
            goto label_1fe830;
        }
    }
    ctx->pc = 0x1FE80Cu;
    // 0x1fe80c: 0x28a30032  slti        $v1, $a1, 0x32
    ctx->pc = 0x1fe80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1fe810: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE810u;
    {
        const bool branch_taken_0x1fe810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe810) {
            ctx->pc = 0x1FE820u;
            goto label_1fe820;
        }
    }
    ctx->pc = 0x1FE818u;
    // 0x1fe818: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE818u;
    {
        const bool branch_taken_0x1fe818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE818u;
            // 0x1fe81c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe818) {
            ctx->pc = 0x1FE834u;
            goto label_1fe834;
        }
    }
    ctx->pc = 0x1FE820u;
label_1fe820:
    // 0x1fe820: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x1FE820u;
    SET_GPR_U32(ctx, 31, 0x1FE828u);
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE828u; }
        if (ctx->pc != 0x1FE828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE828u; }
        if (ctx->pc != 0x1FE828u) { return; }
    }
    ctx->pc = 0x1FE828u;
label_1fe828:
    // 0x1fe828: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x1FE828u;
    SET_GPR_U32(ctx, 31, 0x1FE830u);
    ctx->pc = 0x1FE82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE828u;
            // 0x1fe82c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE830u; }
        if (ctx->pc != 0x1FE830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE830u; }
        if (ctx->pc != 0x1FE830u) { return; }
    }
    ctx->pc = 0x1FE830u;
label_1fe830:
    // 0x1fe830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe834:
    // 0x1fe834: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE834u;
            // 0x1fe838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE83Cu;
}
