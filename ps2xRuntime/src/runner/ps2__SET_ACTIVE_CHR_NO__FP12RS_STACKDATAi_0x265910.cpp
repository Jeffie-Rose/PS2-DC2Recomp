#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_CHR_NO__FP12RS_STACKDATAi
// Address: 0x265910 - 0x265978
void ps2__SET_ACTIVE_CHR_NO__FP12RS_STACKDATAi_0x265910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_CHR_NO__FP12RS_STACKDATAi_0x265910");
#endif

    switch (ctx->pc) {
        case 0x26592cu: goto label_26592c;
        case 0x265954u: goto label_265954;
        case 0x265960u: goto label_265960;
        default: break;
    }

    ctx->pc = 0x265910u;

    // 0x265910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26591c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x265920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265924: 0xc064220  jal         func_190880
    ctx->pc = 0x265924u;
    SET_GPR_U32(ctx, 31, 0x26592Cu);
    ctx->pc = 0x265928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265924u;
            // 0x265928: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26592Cu; }
        if (ctx->pc != 0x26592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26592Cu; }
        if (ctx->pc != 0x26592Cu) { return; }
    }
    ctx->pc = 0x26592Cu;
label_26592c:
    // 0x26592c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26592Cu;
    {
        const bool branch_taken_0x26592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26592Cu;
            // 0x265930: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26592c) {
            ctx->pc = 0x26593Cu;
            goto label_26593c;
        }
    }
    ctx->pc = 0x265934u;
    // 0x265934: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x265938: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x265938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_26593c:
    // 0x26593c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26593Cu;
    {
        const bool branch_taken_0x26593c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x265940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26593Cu;
            // 0x265940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26593c) {
            ctx->pc = 0x26594Cu;
            goto label_26594c;
        }
    }
    ctx->pc = 0x265944u;
    // 0x265944: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x265944u;
    {
        const bool branch_taken_0x265944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265944u;
            // 0x265948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265944) {
            ctx->pc = 0x265964u;
            goto label_265964;
        }
    }
    ctx->pc = 0x26594Cu;
label_26594c:
    // 0x26594c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26594Cu;
    SET_GPR_U32(ctx, 31, 0x265954u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265954u; }
        if (ctx->pc != 0x265954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265954u; }
        if (ctx->pc != 0x265954u) { return; }
    }
    ctx->pc = 0x265954u;
label_265954:
    // 0x265954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265958: 0xc0670f4  jal         func_19C3D0
    ctx->pc = 0x265958u;
    SET_GPR_U32(ctx, 31, 0x265960u);
    ctx->pc = 0x26595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265958u;
            // 0x26595c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C3D0u;
    if (runtime->hasFunction(0x19C3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19C3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265960u; }
        if (ctx->pc != 0x265960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveChrNo__16CUserDataManagerFi_0x19c3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265960u; }
        if (ctx->pc != 0x265960u) { return; }
    }
    ctx->pc = 0x265960u;
label_265960:
    // 0x265960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265964:
    // 0x265964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26596c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26596cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265970: 0x3e00008  jr          $ra
    ctx->pc = 0x265970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265970u;
            // 0x265974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265978u;
}
