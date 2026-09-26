#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_DOOR_PARTS__FP12RS_STACKDATAi
// Address: 0x2758f0 - 0x275984
void ps2__EOH_SYNC_DOOR_PARTS__FP12RS_STACKDATAi_0x2758f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_DOOR_PARTS__FP12RS_STACKDATAi_0x2758f0");
#endif

    switch (ctx->pc) {
        case 0x275920u: goto label_275920;
        case 0x275930u: goto label_275930;
        case 0x275950u: goto label_275950;
        case 0x275968u: goto label_275968;
        default: break;
    }

    ctx->pc = 0x2758f0u;

    // 0x2758f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2758f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2758f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2758f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2758f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2758f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2758fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2758fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275904: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275904u;
    {
        const bool branch_taken_0x275904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x275908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275904u;
            // 0x275908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275904) {
            ctx->pc = 0x275914u;
            goto label_275914;
        }
    }
    ctx->pc = 0x27590Cu;
    // 0x27590c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27590Cu;
    {
        const bool branch_taken_0x27590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27590Cu;
            // 0x275910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27590c) {
            ctx->pc = 0x27596Cu;
            goto label_27596c;
        }
    }
    ctx->pc = 0x275914u;
label_275914:
    // 0x275914: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x275914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x275918: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275918u;
    SET_GPR_U32(ctx, 31, 0x275920u);
    ctx->pc = 0x27591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275918u;
            // 0x27591c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275920u; }
        if (ctx->pc != 0x275920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275920u; }
        if (ctx->pc != 0x275920u) { return; }
    }
    ctx->pc = 0x275920u;
label_275920:
    // 0x275920: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x275920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x275924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275928: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x275928u;
    SET_GPR_U32(ctx, 31, 0x275930u);
    ctx->pc = 0x27592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275928u;
            // 0x27592c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (runtime->hasFunction(0x1D78D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D78D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275930u; }
        if (ctx->pc != 0x275930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDoorParts__11CAutoMapGenFv_0x1d78d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275930u; }
        if (ctx->pc != 0x275930u) { return; }
    }
    ctx->pc = 0x275930u;
label_275930:
    // 0x275930: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x275930u;
    {
        const bool branch_taken_0x275930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275930u;
            // 0x275934: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275930) {
            ctx->pc = 0x27595Cu;
            goto label_27595c;
        }
    }
    ctx->pc = 0x275938u;
    // 0x275938: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x27593c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27593cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275944: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275948: 0xc097690  jal         func_25DA40
    ctx->pc = 0x275948u;
    SET_GPR_U32(ctx, 31, 0x275950u);
    ctx->pc = 0x27594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275948u;
            // 0x27594c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA40u;
    if (runtime->hasFunction(0x25DA40u)) {
        auto targetFn = runtime->lookupFunction(0x25DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275950u; }
        if (ctx->pc != 0x275950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP7CObjecti_0x25da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275950u; }
        if (ctx->pc != 0x275950u) { return; }
    }
    ctx->pc = 0x275950u;
label_275950:
    // 0x275950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275950u;
    {
        const bool branch_taken_0x275950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275950u;
            // 0x275954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275950) {
            ctx->pc = 0x275960u;
            goto label_275960;
        }
    }
    ctx->pc = 0x275958u;
    // 0x275958: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x275958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27595c:
    // 0x27595c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275960:
    // 0x275960: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275960u;
    SET_GPR_U32(ctx, 31, 0x275968u);
    ctx->pc = 0x275964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275960u;
            // 0x275964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275968u; }
        if (ctx->pc != 0x275968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275968u; }
        if (ctx->pc != 0x275968u) { return; }
    }
    ctx->pc = 0x275968u;
label_275968:
    // 0x275968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27596c:
    // 0x27596c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27597c: 0x3e00008  jr          $ra
    ctx->pc = 0x27597Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27597Cu;
            // 0x275980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275984u;
}
