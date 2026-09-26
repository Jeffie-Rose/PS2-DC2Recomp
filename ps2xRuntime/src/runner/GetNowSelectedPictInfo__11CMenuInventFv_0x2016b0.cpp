#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowSelectedPictInfo__11CMenuInventFv
// Address: 0x2016b0 - 0x201718
void GetNowSelectedPictInfo__11CMenuInventFv_0x2016b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowSelectedPictInfo__11CMenuInventFv_0x2016b0");
#endif

    switch (ctx->pc) {
        case 0x2016f8u: goto label_2016f8;
        case 0x20170cu: goto label_20170c;
        default: break;
    }

    ctx->pc = 0x2016b0u;

    // 0x2016b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2016b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2016b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2016b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2016b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2016b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2016bc: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2016c0: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2016C0u;
    {
        const bool branch_taken_0x2016c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2016C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016C0u;
            // 0x2016c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016c0) {
            ctx->pc = 0x201700u;
            goto label_201700;
        }
    }
    ctx->pc = 0x2016C8u;
    // 0x2016c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2016c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2016cc: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2016CCu;
    {
        const bool branch_taken_0x2016cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2016D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016CCu;
            // 0x2016d0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016cc) {
            ctx->pc = 0x2016ECu;
            goto label_2016ec;
        }
    }
    ctx->pc = 0x2016D4u;
    // 0x2016d4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2016D4u;
    {
        const bool branch_taken_0x2016d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2016d4) {
            ctx->pc = 0x2016ECu;
            goto label_2016ec;
        }
    }
    ctx->pc = 0x2016DCu;
    // 0x2016dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2016DCu;
    {
        const bool branch_taken_0x2016dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016dc) {
            ctx->pc = 0x2016ECu;
            goto label_2016ec;
        }
    }
    ctx->pc = 0x2016E4u;
    // 0x2016e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2016E4u;
    {
        const bool branch_taken_0x2016e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2016E4u;
            // 0x2016e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016e4) {
            ctx->pc = 0x201710u;
            goto label_201710;
        }
    }
    ctx->pc = 0x2016ECu;
label_2016ec:
    // 0x2016ec: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x2016ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x2016f0: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x2016F0u;
    SET_GPR_U32(ctx, 31, 0x2016F8u);
    ctx->pc = 0x2016F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2016F0u;
            // 0x2016f4: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016F8u; }
        if (ctx->pc != 0x2016F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2016F8u; }
        if (ctx->pc != 0x2016F8u) { return; }
    }
    ctx->pc = 0x2016F8u;
label_2016f8:
    // 0x2016f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2016F8u;
    {
        const bool branch_taken_0x2016f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016f8) {
            ctx->pc = 0x20170Cu;
            goto label_20170c;
        }
    }
    ctx->pc = 0x201700u;
label_201700:
    // 0x201700: 0x8c85012c  lw          $a1, 0x12C($a0)
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x201704: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x201704u;
    SET_GPR_U32(ctx, 31, 0x20170Cu);
    ctx->pc = 0x201708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201704u;
            // 0x201708: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20170Cu; }
        if (ctx->pc != 0x20170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20170Cu; }
        if (ctx->pc != 0x20170Cu) { return; }
    }
    ctx->pc = 0x20170Cu;
label_20170c:
    // 0x20170c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201710:
    // 0x201710: 0x3e00008  jr          $ra
    ctx->pc = 0x201710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201710u;
            // 0x201714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201718u;
}
