#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Birth__7CRippleFPf
// Address: 0x281510 - 0x28158c
void Birth__7CRippleFPf_0x281510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Birth__7CRippleFPf_0x281510");
#endif

    switch (ctx->pc) {
        case 0x281540u: goto label_281540;
        case 0x281564u: goto label_281564;
        case 0x281578u: goto label_281578;
        default: break;
    }

    ctx->pc = 0x281510u;

    // 0x281510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28151c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281520u;
    {
        const bool branch_taken_0x281520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281520u;
            // 0x281524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281520) {
            ctx->pc = 0x281530u;
            goto label_281530;
        }
    }
    ctx->pc = 0x281528u;
    // 0x281528: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x281528u;
    {
        const bool branch_taken_0x281528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281528u;
            // 0x28152c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281528) {
            ctx->pc = 0x28157Cu;
            goto label_28157c;
        }
    }
    ctx->pc = 0x281530u;
label_281530:
    // 0x281530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281534: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281538: 0xc041c5c  jal         func_107170
    ctx->pc = 0x281538u;
    SET_GPR_U32(ctx, 31, 0x281540u);
    ctx->pc = 0x28153Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281538u;
            // 0x28153c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281540u; }
        if (ctx->pc != 0x281540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281540u; }
        if (ctx->pc != 0x281540u) { return; }
    }
    ctx->pc = 0x281540u;
label_281540:
    // 0x281540: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281544: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281548: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x281548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x28154c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28154cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x281550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x281550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281554: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x281554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x281558: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x281558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28155c: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x28155Cu;
    SET_GPR_U32(ctx, 31, 0x281564u);
    ctx->pc = 0x281560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28155Cu;
            // 0x281560: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281564u; }
        if (ctx->pc != 0x281564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281564u; }
        if (ctx->pc != 0x281564u) { return; }
    }
    ctx->pc = 0x281564u;
label_281564:
    // 0x281564: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x281564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x281568: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x281568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28156c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x28156cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x281570: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x281570u;
    SET_GPR_U32(ctx, 31, 0x281578u);
    ctx->pc = 0x281574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281570u;
            // 0x281574: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281350u;
    if (runtime->hasFunction(0x281350u)) {
        auto targetFn = runtime->lookupFunction(0x281350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281578u; }
        if (ctx->pc != 0x281578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        i_rand__Fii_0x281350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281578u; }
        if (ctx->pc != 0x281578u) { return; }
    }
    ctx->pc = 0x281578u;
label_281578:
    // 0x281578: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x281578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_28157c:
    // 0x28157c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281584: 0x3e00008  jr          $ra
    ctx->pc = 0x281584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281584u;
            // 0x281588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28158Cu;
}
