#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RelateAlbumPicData__13CDC2AlbumDataFv
// Address: 0x1fe790 - 0x1fe800
void RelateAlbumPicData__13CDC2AlbumDataFv_0x1fe790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RelateAlbumPicData__13CDC2AlbumDataFv_0x1fe790");
#endif

    switch (ctx->pc) {
        case 0x1fe7b0u: goto label_1fe7b0;
        case 0x1fe7bcu: goto label_1fe7bc;
        default: break;
    }

    ctx->pc = 0x1fe790u;

    // 0x1fe790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fe794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fe798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe7a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe7a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7b0:
    // 0x1fe7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe7b4: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x1FE7B4u;
    SET_GPR_U32(ctx, 31, 0x1FE7BCu);
    ctx->pc = 0x1FE7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7B4u;
            // 0x1fe7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7BCu; }
        if (ctx->pc != 0x1FE7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE7BCu; }
        if (ctx->pc != 0x1FE7BCu) { return; }
    }
    ctx->pc = 0x1FE7BCu;
label_1fe7bc:
    // 0x1fe7bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE7BCu;
    {
        const bool branch_taken_0x1fe7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe7bc) {
            ctx->pc = 0x1FE7D4u;
            goto label_1fe7d4;
        }
    }
    ctx->pc = 0x1FE7C4u;
    // 0x1fe7c4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE7C4u;
    {
        const bool branch_taken_0x1fe7c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7C4u;
            // 0x1fe7c8: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7c4) {
            ctx->pc = 0x1FE7D4u;
            goto label_1fe7d4;
        }
    }
    ctx->pc = 0x1FE7CCu;
    // 0x1fe7cc: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1fe7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1fe7d0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1fe7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_1fe7d4:
    // 0x1fe7d4: 0x0  nop
    ctx->pc = 0x1fe7d4u;
    // NOP
    // 0x1fe7d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe7dc: 0x2a030032  slti        $v1, $s0, 0x32
    ctx->pc = 0x1fe7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1fe7e0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FE7E0u;
    {
        const bool branch_taken_0x1fe7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7E0u;
            // 0x1fe7e4: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7e0) {
            ctx->pc = 0x1FE7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe7b0;
        }
    }
    ctx->pc = 0x1FE7E8u;
    // 0x1fe7e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fe7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe7ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe7f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE7F8u;
            // 0x1fe7fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE800u;
}
