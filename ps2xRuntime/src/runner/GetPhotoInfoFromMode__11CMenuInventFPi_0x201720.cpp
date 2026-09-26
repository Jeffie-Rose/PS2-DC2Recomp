#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhotoInfoFromMode__11CMenuInventFPi
// Address: 0x201720 - 0x20179c
void GetPhotoInfoFromMode__11CMenuInventFPi_0x201720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhotoInfoFromMode__11CMenuInventFPi_0x201720");
#endif

    switch (ctx->pc) {
        case 0x201770u: goto label_201770;
        case 0x201790u: goto label_201790;
        default: break;
    }

    ctx->pc = 0x201720u;

    // 0x201720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201724: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x201724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x201728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20172c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20172cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x201730: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x201730u;
    {
        const bool branch_taken_0x201730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201730u;
            // 0x201734: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201730) {
            ctx->pc = 0x201778u;
            goto label_201778;
        }
    }
    ctx->pc = 0x201738u;
    // 0x201738: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201738u;
    {
        const bool branch_taken_0x201738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201738u;
            // 0x20173c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201738) {
            ctx->pc = 0x201758u;
            goto label_201758;
        }
    }
    ctx->pc = 0x201740u;
    // 0x201740: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201740u;
    {
        const bool branch_taken_0x201740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201740) {
            ctx->pc = 0x201758u;
            goto label_201758;
        }
    }
    ctx->pc = 0x201748u;
    // 0x201748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201748u;
    {
        const bool branch_taken_0x201748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201748) {
            ctx->pc = 0x201758u;
            goto label_201758;
        }
    }
    ctx->pc = 0x201750u;
    // 0x201750: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201750u;
    {
        const bool branch_taken_0x201750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201750u;
            // 0x201754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201750) {
            ctx->pc = 0x201790u;
            goto label_201790;
        }
    }
    ctx->pc = 0x201758u;
label_201758:
    // 0x201758: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x201758u;
    {
        const bool branch_taken_0x201758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201758u;
            // 0x20175c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201758) {
            ctx->pc = 0x201764u;
            goto label_201764;
        }
    }
    ctx->pc = 0x201760u;
    // 0x201760: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x201760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_201764:
    // 0x201764: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x201764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x201768: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x201768u;
    SET_GPR_U32(ctx, 31, 0x201770u);
    ctx->pc = 0x20176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201768u;
            // 0x20176c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201770u; }
        if (ctx->pc != 0x201770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201770u; }
        if (ctx->pc != 0x201770u) { return; }
    }
    ctx->pc = 0x201770u;
label_201770:
    // 0x201770: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201770u;
    {
        const bool branch_taken_0x201770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201770u;
            // 0x201774: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201770) {
            ctx->pc = 0x201794u;
            goto label_201794;
        }
    }
    ctx->pc = 0x201778u;
label_201778:
    // 0x201778: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x201778u;
    {
        const bool branch_taken_0x201778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201778u;
            // 0x20177c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201778) {
            ctx->pc = 0x201784u;
            goto label_201784;
        }
    }
    ctx->pc = 0x201780u;
    // 0x201780: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x201780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_201784:
    // 0x201784: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x201784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x201788: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x201788u;
    SET_GPR_U32(ctx, 31, 0x201790u);
    ctx->pc = 0x20178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201788u;
            // 0x20178c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201790u; }
        if (ctx->pc != 0x201790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201790u; }
        if (ctx->pc != 0x201790u) { return; }
    }
    ctx->pc = 0x201790u;
label_201790:
    // 0x201790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201794:
    // 0x201794: 0x3e00008  jr          $ra
    ctx->pc = 0x201794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201794u;
            // 0x201798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20179Cu;
}
