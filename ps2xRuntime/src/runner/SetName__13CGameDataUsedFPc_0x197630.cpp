#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetName__13CGameDataUsedFPc
// Address: 0x197630 - 0x197700
void SetName__13CGameDataUsedFPc_0x197630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetName__13CGameDataUsedFPc_0x197630");
#endif

    switch (ctx->pc) {
        case 0x1976acu: goto label_1976ac;
        case 0x1976c0u: goto label_1976c0;
        case 0x1976c8u: goto label_1976c8;
        case 0x1976dcu: goto label_1976dc;
        default: break;
    }

    ctx->pc = 0x197630u;

    // 0x197630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x197638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19763c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19764c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19764cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197650: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x197650u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197654: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x197654u;
    {
        const bool branch_taken_0x197654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197654u;
            // 0x197658: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197654) {
            ctx->pc = 0x197698u;
            goto label_197698;
        }
    }
    ctx->pc = 0x19765Cu;
    // 0x19765c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197660: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x197660u;
    {
        const bool branch_taken_0x197660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197660u;
            // 0x197664: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197660) {
            ctx->pc = 0x197690u;
            goto label_197690;
        }
    }
    ctx->pc = 0x197668u;
    // 0x197668: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x197668u;
    {
        const bool branch_taken_0x197668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197668u;
            // 0x19766c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197668) {
            ctx->pc = 0x197688u;
            goto label_197688;
        }
    }
    ctx->pc = 0x197670u;
    // 0x197670: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197670u;
    {
        const bool branch_taken_0x197670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197670) {
            ctx->pc = 0x197680u;
            goto label_197680;
        }
    }
    ctx->pc = 0x197678u;
    // 0x197678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197678u;
    {
        const bool branch_taken_0x197678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197678) {
            ctx->pc = 0x19769Cu;
            goto label_19769c;
        }
    }
    ctx->pc = 0x197680u;
label_197680:
    // 0x197680: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x197680u;
    {
        const bool branch_taken_0x197680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197680u;
            // 0x197684: 0x26500043  addiu       $s0, $s2, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197680) {
            ctx->pc = 0x19769Cu;
            goto label_19769c;
        }
    }
    ctx->pc = 0x197688u;
label_197688:
    // 0x197688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197688u;
    {
        const bool branch_taken_0x197688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197688u;
            // 0x19768c: 0x2650003c  addiu       $s0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197688) {
            ctx->pc = 0x19769Cu;
            goto label_19769c;
        }
    }
    ctx->pc = 0x197690u;
label_197690:
    // 0x197690: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197690u;
    {
        const bool branch_taken_0x197690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197690u;
            // 0x197694: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197690) {
            ctx->pc = 0x19769Cu;
            goto label_19769c;
        }
    }
    ctx->pc = 0x197698u;
label_197698:
    // 0x197698: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x197698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_19769c:
    // 0x19769c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19769Cu;
    {
        const bool branch_taken_0x19769c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19769Cu;
            // 0x1976a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19769c) {
            ctx->pc = 0x1976E8u;
            goto label_1976e8;
        }
    }
    ctx->pc = 0x1976A4u;
    // 0x1976a4: 0xc04a422  jal         func_129088
    ctx->pc = 0x1976A4u;
    SET_GPR_U32(ctx, 31, 0x1976ACu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976ACu; }
        if (ctx->pc != 0x1976ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976ACu; }
        if (ctx->pc != 0x1976ACu) { return; }
    }
    ctx->pc = 0x1976ACu;
label_1976ac:
    // 0x1976ac: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x1976acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1976b0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1976B0u;
    {
        const bool branch_taken_0x1976b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976B0u;
            // 0x1976b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976b0) {
            ctx->pc = 0x1976E8u;
            goto label_1976e8;
        }
    }
    ctx->pc = 0x1976B8u;
    // 0x1976b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1976B8u;
    SET_GPR_U32(ctx, 31, 0x1976C0u);
    ctx->pc = 0x1976BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1976B8u;
            // 0x1976bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C0u; }
        if (ctx->pc != 0x1976C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C0u; }
        if (ctx->pc != 0x1976C0u) { return; }
    }
    ctx->pc = 0x1976C0u;
label_1976c0:
    // 0x1976c0: 0xc065810  jal         func_196040
    ctx->pc = 0x1976C0u;
    SET_GPR_U32(ctx, 31, 0x1976C8u);
    ctx->pc = 0x1976C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1976C0u;
            // 0x1976c4: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C8u; }
        if (ctx->pc != 0x1976C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C8u; }
        if (ctx->pc != 0x1976C8u) { return; }
    }
    ctx->pc = 0x1976C8u;
label_1976c8:
    // 0x1976c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1976c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1976CCu;
    {
        const bool branch_taken_0x1976cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976CCu;
            // 0x1976d0: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976cc) {
            ctx->pc = 0x1976E8u;
            goto label_1976e8;
        }
    }
    ctx->pc = 0x1976D4u;
    // 0x1976d4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1976D4u;
    SET_GPR_U32(ctx, 31, 0x1976DCu);
    ctx->pc = 0x1976D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1976D4u;
            // 0x1976d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976DCu; }
        if (ctx->pc != 0x1976DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976DCu; }
        if (ctx->pc != 0x1976DCu) { return; }
    }
    ctx->pc = 0x1976DCu;
label_1976dc:
    // 0x1976dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1976DCu;
    {
        const bool branch_taken_0x1976dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976DCu;
            // 0x1976e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976dc) {
            ctx->pc = 0x1976E8u;
            goto label_1976e8;
        }
    }
    ctx->pc = 0x1976E4u;
    // 0x1976e4: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x1976e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
label_1976e8:
    // 0x1976e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1976e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1976ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1976ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1976f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1976f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1976f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1976f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1976f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1976F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1976FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976F8u;
            // 0x1976fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197700u;
}
