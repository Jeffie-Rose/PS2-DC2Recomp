#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSystemMes__Fv
// Address: 0x1967c0 - 0x196858
void LoadSystemMes__Fv_0x1967c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSystemMes__Fv_0x1967c0");
#endif

    switch (ctx->pc) {
        case 0x1967fcu: goto label_1967fc;
        case 0x196814u: goto label_196814;
        case 0x196834u: goto label_196834;
        case 0x19684cu: goto label_19684c;
        default: break;
    }

    ctx->pc = 0x1967c0u;

    // 0x1967c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1967c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1967c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1967c8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1967c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1967cc: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1967CCu;
    {
        const bool branch_taken_0x1967cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967cc) {
            ctx->pc = 0x19681Cu;
            goto label_19681c;
        }
    }
    ctx->pc = 0x1967D4u;
    // 0x1967d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1967d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1967d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1967D8u;
    {
        const bool branch_taken_0x1967d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1967DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967D8u;
            // 0x1967dc: 0x3c0501e7  lui         $a1, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967d8) {
            ctx->pc = 0x1967E8u;
            goto label_1967e8;
        }
    }
    ctx->pc = 0x1967E0u;
    // 0x1967e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1967E0u;
    {
        const bool branch_taken_0x1967e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1967e0) {
            ctx->pc = 0x19681Cu;
            goto label_19681c;
        }
    }
    ctx->pc = 0x1967E8u;
label_1967e8:
    // 0x1967e8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1967ec: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x1967f0: 0x24845560  addiu       $a0, $a0, 0x5560
    ctx->pc = 0x1967f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
    // 0x1967f4: 0xc0524c8  jal         func_149320
    ctx->pc = 0x1967F4u;
    SET_GPR_U32(ctx, 31, 0x1967FCu);
    ctx->pc = 0x1967F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967F4u;
            // 0x1967f8: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967FCu; }
        if (ctx->pc != 0x1967FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967FCu; }
        if (ctx->pc != 0x1967FCu) { return; }
    }
    ctx->pc = 0x1967FCu;
label_1967fc:
    // 0x1967fc: 0x3c0501e8  lui         $a1, 0x1E8
    ctx->pc = 0x1967fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)488 << 16));
    // 0x196800: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x196800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x196804: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x196808: 0x24845580  addiu       $a0, $a0, 0x5580
    ctx->pc = 0x196808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21888));
    // 0x19680c: 0xc0524c8  jal         func_149320
    ctx->pc = 0x19680Cu;
    SET_GPR_U32(ctx, 31, 0x196814u);
    ctx->pc = 0x196810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19680Cu;
            // 0x196810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196814u; }
        if (ctx->pc != 0x196814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196814u; }
        if (ctx->pc != 0x196814u) { return; }
    }
    ctx->pc = 0x196814u;
label_196814:
    // 0x196814: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x196814u;
    {
        const bool branch_taken_0x196814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196814u;
            // 0x196818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196814) {
            ctx->pc = 0x196850u;
            goto label_196850;
        }
    }
    ctx->pc = 0x19681Cu;
label_19681c:
    // 0x19681c: 0x3c0501e7  lui         $a1, 0x1E7
    ctx->pc = 0x19681cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)487 << 16));
    // 0x196820: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x196820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x196824: 0x24a54240  addiu       $a1, $a1, 0x4240
    ctx->pc = 0x196824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16960));
    // 0x196828: 0x248455a0  addiu       $a0, $a0, 0x55A0
    ctx->pc = 0x196828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21920));
    // 0x19682c: 0xc0524c8  jal         func_149320
    ctx->pc = 0x19682Cu;
    SET_GPR_U32(ctx, 31, 0x196834u);
    ctx->pc = 0x196830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19682Cu;
            // 0x196830: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196834u; }
        if (ctx->pc != 0x196834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196834u; }
        if (ctx->pc != 0x196834u) { return; }
    }
    ctx->pc = 0x196834u;
label_196834:
    // 0x196834: 0x3c0501e8  lui         $a1, 0x1E8
    ctx->pc = 0x196834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)488 << 16));
    // 0x196838: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x196838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19683c: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x19683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x196840: 0x248455c0  addiu       $a0, $a0, 0x55C0
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21952));
    // 0x196844: 0xc0524c8  jal         func_149320
    ctx->pc = 0x196844u;
    SET_GPR_U32(ctx, 31, 0x19684Cu);
    ctx->pc = 0x196848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196844u;
            // 0x196848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19684Cu; }
        if (ctx->pc != 0x19684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19684Cu; }
        if (ctx->pc != 0x19684Cu) { return; }
    }
    ctx->pc = 0x19684Cu;
label_19684c:
    // 0x19684c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19684cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196850:
    // 0x196850: 0x3e00008  jr          $ra
    ctx->pc = 0x196850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196850u;
            // 0x196854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196858u;
}
