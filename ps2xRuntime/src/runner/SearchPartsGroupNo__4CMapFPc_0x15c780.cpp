#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchPartsGroupNo__4CMapFPc
// Address: 0x15c780 - 0x15c818
void SearchPartsGroupNo__4CMapFPc_0x15c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchPartsGroupNo__4CMapFPc_0x15c780");
#endif

    switch (ctx->pc) {
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7ccu: goto label_15c7cc;
        default: break;
    }

    ctx->pc = 0x15c780u;

    // 0x15c780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15c784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15c788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c78c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c798: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c7a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15c7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c7a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15C7A4u;
    {
        const bool branch_taken_0x15c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7A4u;
            // 0x15c7a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7a4) {
            ctx->pc = 0x15C7E4u;
            goto label_15c7e4;
        }
    }
    ctx->pc = 0x15C7ACu;
label_15c7ac:
    // 0x15c7ac: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x15c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x15c7b0: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x15c7b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x15c7b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15c7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15c7b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c7bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C7BCu;
    {
        const bool branch_taken_0x15c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7BCu;
            // 0x15c7c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7bc) {
            ctx->pc = 0x15C7DCu;
            goto label_15c7dc;
        }
    }
    ctx->pc = 0x15C7C4u;
    // 0x15c7c4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x15C7C4u;
    SET_GPR_U32(ctx, 31, 0x15C7CCu);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7CCu; }
        if (ctx->pc != 0x15C7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C7CCu; }
        if (ctx->pc != 0x15C7CCu) { return; }
    }
    ctx->pc = 0x15C7CCu;
label_15c7cc:
    // 0x15c7cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C7CCu;
    {
        const bool branch_taken_0x15c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7CCu;
            // 0x15c7d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7cc) {
            ctx->pc = 0x15C7DCu;
            goto label_15c7dc;
        }
    }
    ctx->pc = 0x15C7D4u;
    // 0x15c7d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15C7D4u;
    {
        const bool branch_taken_0x15c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7D4u;
            // 0x15c7d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7d4) {
            ctx->pc = 0x15C800u;
            goto label_15c800;
        }
    }
    ctx->pc = 0x15C7DCu;
label_15c7dc:
    // 0x15c7dc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15c7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15c7e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c7e4:
    // 0x15c7e4: 0x0  nop
    ctx->pc = 0x15c7e4u;
    // NOP
    // 0x15c7e8: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x15c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x15c7ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x15c7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c7f0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15C7F0u;
    {
        const bool branch_taken_0x15c7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7F0u;
            // 0x15c7f4: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c7f0) {
            ctx->pc = 0x15C7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c7ac;
        }
    }
    ctx->pc = 0x15C7F8u;
    // 0x15c7f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c7fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15c7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15c800:
    // 0x15c800: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c810: 0x3e00008  jr          $ra
    ctx->pc = 0x15C810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C810u;
            // 0x15c814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C818u;
}
