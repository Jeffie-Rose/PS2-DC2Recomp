#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCollisionModel__19CTreasureBoxManagerFPUiP9mgCMemory
// Address: 0x28c500 - 0x28c550
void SetCollisionModel__19CTreasureBoxManagerFPUiP9mgCMemory_0x28c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCollisionModel__19CTreasureBoxManagerFPUiP9mgCMemory_0x28c500");
#endif

    switch (ctx->pc) {
        case 0x28c52cu: goto label_28c52c;
        case 0x28c538u: goto label_28c538;
        default: break;
    }

    ctx->pc = 0x28c500u;

    // 0x28c500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28c504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28c508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c50c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c510: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c514: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28c514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c518: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28c518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c51c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28c51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28c520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c524: 0xc052734  jal         func_149CD0
    ctx->pc = 0x28C524u;
    SET_GPR_U32(ctx, 31, 0x28C52Cu);
    ctx->pc = 0x28C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C524u;
            // 0x28c528: 0x24a5d6d8  addiu       $a1, $a1, -0x2928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C52Cu; }
        if (ctx->pc != 0x28C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C52Cu; }
        if (ctx->pc != 0x28C52Cu) { return; }
    }
    ctx->pc = 0x28C52Cu;
label_28c52c:
    // 0x28c52c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c530: 0xc051fdc  jal         func_147F70
    ctx->pc = 0x28C530u;
    SET_GPR_U32(ctx, 31, 0x28C538u);
    ctx->pc = 0x28C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C530u;
            // 0x28c534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147F70u;
    if (runtime->hasFunction(0x147F70u)) {
        auto targetFn = runtime->lookupFunction(0x147F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C538u; }
        if (ctx->pc != 0x28C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCollisionFile__FP10MDS_HEADERP9mgCMemory_0x147f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C538u; }
        if (ctx->pc != 0x28C538u) { return; }
    }
    ctx->pc = 0x28C538u;
label_28c538:
    // 0x28c538: 0xae220a98  sw          $v0, 0xA98($s1)
    ctx->pc = 0x28c538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2712), GPR_U32(ctx, 2));
    // 0x28c53c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c548: 0x3e00008  jr          $ra
    ctx->pc = 0x28C548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C548u;
            // 0x28c54c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C550u;
}
