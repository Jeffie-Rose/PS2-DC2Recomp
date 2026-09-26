#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SndInReverb__6CSoundFb
// Address: 0x1888d0 - 0x188940
void SndInReverb__6CSoundFb_0x1888d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndInReverb__6CSoundFb_0x1888d0");
#endif

    switch (ctx->pc) {
        case 0x1888f0u: goto label_1888f0;
        case 0x188904u: goto label_188904;
        case 0x188920u: goto label_188920;
        case 0x188934u: goto label_188934;
        default: break;
    }

    ctx->pc = 0x1888d0u;

    // 0x1888d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1888d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1888d4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1888D4u;
    {
        const bool branch_taken_0x1888d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888D4u;
            // 0x1888d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888d4) {
            ctx->pc = 0x18890Cu;
            goto label_18890c;
        }
    }
    ctx->pc = 0x1888DCu;
    // 0x1888dc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x1888dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x1888e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1888e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1888e4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1888e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1888e8: 0xc046454  jal         func_119150
    ctx->pc = 0x1888E8u;
    SET_GPR_U32(ctx, 31, 0x1888F0u);
    ctx->pc = 0x1888ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888E8u;
            // 0x1888ec: 0x2407fffc  addiu       $a3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888F0u; }
        if (ctx->pc != 0x1888F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888F0u; }
        if (ctx->pc != 0x1888F0u) { return; }
    }
    ctx->pc = 0x1888F0u;
label_1888f0:
    // 0x1888f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1888f4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x1888f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x1888f8: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x1888f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x1888fc: 0xc046454  jal         func_119150
    ctx->pc = 0x1888FCu;
    SET_GPR_U32(ctx, 31, 0x188904u);
    ctx->pc = 0x188900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888FCu;
            // 0x188900: 0x2407fffc  addiu       $a3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188904u; }
        if (ctx->pc != 0x188904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188904u; }
        if (ctx->pc != 0x188904u) { return; }
    }
    ctx->pc = 0x188904u;
label_188904:
    // 0x188904: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x188904u;
    {
        const bool branch_taken_0x188904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188904u;
            // 0x188908: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188904) {
            ctx->pc = 0x188938u;
            goto label_188938;
        }
    }
    ctx->pc = 0x18890Cu;
label_18890c:
    // 0x18890c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x18890cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188914: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x188914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x188918: 0xc046454  jal         func_119150
    ctx->pc = 0x188918u;
    SET_GPR_U32(ctx, 31, 0x188920u);
    ctx->pc = 0x18891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188918u;
            // 0x18891c: 0x2407ffcc  addiu       $a3, $zero, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188920u; }
        if (ctx->pc != 0x188920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188920u; }
        if (ctx->pc != 0x188920u) { return; }
    }
    ctx->pc = 0x188920u;
label_188920:
    // 0x188920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188924: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x188924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x188928: 0x24060801  addiu       $a2, $zero, 0x801
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x18892c: 0xc046454  jal         func_119150
    ctx->pc = 0x18892Cu;
    SET_GPR_U32(ctx, 31, 0x188934u);
    ctx->pc = 0x188930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18892Cu;
            // 0x188930: 0x2407ffcc  addiu       $a3, $zero, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188934u; }
        if (ctx->pc != 0x188934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188934u; }
        if (ctx->pc != 0x188934u) { return; }
    }
    ctx->pc = 0x188934u;
label_188934:
    // 0x188934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188938:
    // 0x188938: 0x3e00008  jr          $ra
    ctx->pc = 0x188938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188938u;
            // 0x18893c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188940u;
}
