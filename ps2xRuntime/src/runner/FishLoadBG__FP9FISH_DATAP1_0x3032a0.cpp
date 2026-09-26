#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishLoadBG__FP9FISH_DATAP1
// Address: 0x3032a0 - 0x303324
void FishLoadBG__FP9FISH_DATAP1_0x3032a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishLoadBG__FP9FISH_DATAP1_0x3032a0");
#endif

    switch (ctx->pc) {
        case 0x3032d0u: goto label_3032d0;
        case 0x3032d8u: goto label_3032d8;
        case 0x3032fcu: goto label_3032fc;
        case 0x30330cu: goto label_30330c;
        default: break;
    }

    ctx->pc = 0x3032a0u;

    // 0x3032a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3032a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3032a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3032a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3032a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3032ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3032acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3032b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3032b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3032b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3032b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3032B8u;
    {
        const bool branch_taken_0x3032b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3032BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3032B8u;
            // 0x3032bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032b8) {
            ctx->pc = 0x3032C8u;
            goto label_3032c8;
        }
    }
    ctx->pc = 0x3032C0u;
    // 0x3032c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3032C0u;
    {
        const bool branch_taken_0x3032c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3032C0u;
            // 0x3032c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032c0) {
            ctx->pc = 0x303310u;
            goto label_303310;
        }
    }
    ctx->pc = 0x3032C8u;
label_3032c8:
    // 0x3032c8: 0xc052330  jal         func_148CC0
    ctx->pc = 0x3032C8u;
    SET_GPR_U32(ctx, 31, 0x3032D0u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032D0u; }
        if (ctx->pc != 0x3032D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032D0u; }
        if (ctx->pc != 0x3032D0u) { return; }
    }
    ctx->pc = 0x3032D0u;
label_3032d0:
    // 0x3032d0: 0xc0bf144  jal         func_2FC510
    ctx->pc = 0x3032D0u;
    SET_GPR_U32(ctx, 31, 0x3032D8u);
    ctx->pc = 0x3032D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3032D0u;
            // 0x3032d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC510u;
    if (runtime->hasFunction(0x2FC510u)) {
        auto targetFn = runtime->lookupFunction(0x2FC510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032D8u; }
        if (ctx->pc != 0x3032D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishParam__Fi_0x2fc510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032D8u; }
        if (ctx->pc != 0x3032D8u) { return; }
    }
    ctx->pc = 0x3032D8u;
label_3032d8:
    // 0x3032d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3032D8u;
    {
        const bool branch_taken_0x3032d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3032d8) {
            ctx->pc = 0x3032E8u;
            goto label_3032e8;
        }
    }
    ctx->pc = 0x3032E0u;
    // 0x3032e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3032E0u;
    {
        const bool branch_taken_0x3032e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3032E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3032E0u;
            // 0x3032e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032e0) {
            ctx->pc = 0x303310u;
            goto label_303310;
        }
    }
    ctx->pc = 0x3032E8u;
label_3032e8:
    // 0x3032e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3032e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3032ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3032ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3032f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3032f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3032f4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x3032F4u;
    SET_GPR_U32(ctx, 31, 0x3032FCu);
    ctx->pc = 0x3032F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3032F4u;
            // 0x3032f8: 0x24a52100  addiu       $a1, $a1, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032FCu; }
        if (ctx->pc != 0x3032FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3032FCu; }
        if (ctx->pc != 0x3032FCu) { return; }
    }
    ctx->pc = 0x3032FCu;
label_3032fc:
    // 0x3032fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3032fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303300: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x303300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x303304: 0xc05224c  jal         func_148930
    ctx->pc = 0x303304u;
    SET_GPR_U32(ctx, 31, 0x30330Cu);
    ctx->pc = 0x303308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303304u;
            // 0x303308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30330Cu; }
        if (ctx->pc != 0x30330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30330Cu; }
        if (ctx->pc != 0x30330Cu) { return; }
    }
    ctx->pc = 0x30330Cu;
label_30330c:
    // 0x30330c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30330cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_303310:
    // 0x303310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30331c: 0x3e00008  jr          $ra
    ctx->pc = 0x30331Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30331Cu;
            // 0x303320: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303324u;
}
