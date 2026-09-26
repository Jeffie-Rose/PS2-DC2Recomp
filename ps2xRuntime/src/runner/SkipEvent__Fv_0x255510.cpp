#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SkipEvent__Fv
// Address: 0x255510 - 0x2555c8
void SkipEvent__Fv_0x255510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SkipEvent__Fv_0x255510");
#endif

    switch (ctx->pc) {
        case 0x255524u: goto label_255524;
        case 0x255538u: goto label_255538;
        case 0x255564u: goto label_255564;
        case 0x255578u: goto label_255578;
        case 0x2555a4u: goto label_2555a4;
        case 0x2555b8u: goto label_2555b8;
        default: break;
    }

    ctx->pc = 0x255510u;

    // 0x255510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x255514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25551c: 0xc0956bc  jal         func_255AF0
    ctx->pc = 0x25551Cu;
    SET_GPR_U32(ctx, 31, 0x255524u);
    ctx->pc = 0x255520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25551Cu;
            // 0x255520: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255524u; }
        if (ctx->pc != 0x255524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255524u; }
        if (ctx->pc != 0x255524u) { return; }
    }
    ctx->pc = 0x255524u;
label_255524:
    // 0x255524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255528: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x255528u;
    {
        const bool branch_taken_0x255528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255528u;
            // 0x25552c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255528) {
            ctx->pc = 0x25555Cu;
            goto label_25555c;
        }
    }
    ctx->pc = 0x255530u;
    // 0x255530: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x255530u;
    SET_GPR_U32(ctx, 31, 0x255538u);
    ctx->pc = 0x255534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255530u;
            // 0x255534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255538u; }
        if (ctx->pc != 0x255538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255538u; }
        if (ctx->pc != 0x255538u) { return; }
    }
    ctx->pc = 0x255538u;
label_255538:
    // 0x255538: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x255538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x25553c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255540: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x255540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x255544: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x255544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x255548: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x255548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x25554c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x25554cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x255550: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x255550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x255554: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x255554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x255558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x255558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25555c:
    // 0x25555c: 0xc0956bc  jal         func_255AF0
    ctx->pc = 0x25555Cu;
    SET_GPR_U32(ctx, 31, 0x255564u);
    ctx->pc = 0x255AF0u;
    if (runtime->hasFunction(0x255AF0u)) {
        auto targetFn = runtime->lookupFunction(0x255AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255564u; }
        if (ctx->pc != 0x255564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventMessage__Fi_0x255af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255564u; }
        if (ctx->pc != 0x255564u) { return; }
    }
    ctx->pc = 0x255564u;
label_255564:
    // 0x255564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x255564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255568: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x255568u;
    {
        const bool branch_taken_0x255568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255568u;
            // 0x25556c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255568) {
            ctx->pc = 0x25559Cu;
            goto label_25559c;
        }
    }
    ctx->pc = 0x255570u;
    // 0x255570: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x255570u;
    SET_GPR_U32(ctx, 31, 0x255578u);
    ctx->pc = 0x255574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255570u;
            // 0x255574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255578u; }
        if (ctx->pc != 0x255578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255578u; }
        if (ctx->pc != 0x255578u) { return; }
    }
    ctx->pc = 0x255578u;
label_255578:
    // 0x255578: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x255578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x25557c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x255580: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x255580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x255584: 0xae0017e8  sw          $zero, 0x17E8($s0)
    ctx->pc = 0x255584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6120), GPR_U32(ctx, 0));
    // 0x255588: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x255588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x25558c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x25558cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x255590: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x255590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x255594: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x255594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x255598: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x255598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_25559c:
    // 0x25559c: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x25559Cu;
    SET_GPR_U32(ctx, 31, 0x2555A4u);
    ctx->pc = 0x2555A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25559Cu;
            // 0x2555a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2555A4u; }
        if (ctx->pc != 0x2555A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2555A4u; }
        if (ctx->pc != 0x2555A4u) { return; }
    }
    ctx->pc = 0x2555A4u;
label_2555a4:
    // 0x2555a4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2555a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2555a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2555ac: 0x2484e3d0  addiu       $a0, $a0, -0x1C30
    ctx->pc = 0x2555acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
    // 0x2555b0: 0xc061cec  jal         func_1873B0
    ctx->pc = 0x2555B0u;
    SET_GPR_U32(ctx, 31, 0x2555B8u);
    ctx->pc = 0x2555B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2555B0u;
            // 0x2555b4: 0xac20e62c  sw          $zero, -0x19D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1873B0u;
    if (runtime->hasFunction(0x1873B0u)) {
        auto targetFn = runtime->lookupFunction(0x1873B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2555B8u; }
        if (ctx->pc != 0x2555B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        skip__10CRunScriptFv_0x1873b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2555B8u; }
        if (ctx->pc != 0x2555B8u) { return; }
    }
    ctx->pc = 0x2555B8u;
label_2555b8:
    // 0x2555b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2555b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2555bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2555bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2555c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2555C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2555C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2555C0u;
            // 0x2555c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2555C8u;
}
