#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FRONT_VEC__FP12RS_STACKDATAi
// Address: 0x2ce540 - 0x2ce5b0
void ps2__GET_FRONT_VEC__FP12RS_STACKDATAi_0x2ce540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FRONT_VEC__FP12RS_STACKDATAi_0x2ce540");
#endif

    switch (ctx->pc) {
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce584u: goto label_2ce584;
        case 0x2ce594u: goto label_2ce594;
        case 0x2ce5a0u: goto label_2ce5a0;
        default: break;
    }

    ctx->pc = 0x2ce540u;

    // 0x2ce540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce544: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ce544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce550: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE550u;
    {
        const bool branch_taken_0x2ce550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE550u;
            // 0x2ce554: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce550) {
            ctx->pc = 0x2CE560u;
            goto label_2ce560;
        }
    }
    ctx->pc = 0x2CE558u;
    // 0x2ce558: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CE558u;
    {
        const bool branch_taken_0x2ce558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE558u;
            // 0x2ce55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce558) {
            ctx->pc = 0x2CE5A0u;
            goto label_2ce5a0;
        }
    }
    ctx->pc = 0x2CE560u;
label_2ce560:
    // 0x2ce560: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce564: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2ce564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ce568: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ce568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce56c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2CE56Cu;
    SET_GPR_U32(ctx, 31, 0x2CE574u);
    ctx->pc = 0x2CE570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE56Cu;
            // 0x2ce570: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE574u; }
        if (ctx->pc != 0x2CE574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE574u; }
        if (ctx->pc != 0x2CE574u) { return; }
    }
    ctx->pc = 0x2CE574u;
label_2ce574:
    // 0x2ce574: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2ce574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce57c: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2CE57Cu;
    SET_GPR_U32(ctx, 31, 0x2CE584u);
    ctx->pc = 0x2CE580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE57Cu;
            // 0x2ce580: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE584u; }
        if (ctx->pc != 0x2CE584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE584u; }
        if (ctx->pc != 0x2CE584u) { return; }
    }
    ctx->pc = 0x2CE584u;
label_2ce584:
    // 0x2ce584: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2ce584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce58c: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2CE58Cu;
    SET_GPR_U32(ctx, 31, 0x2CE594u);
    ctx->pc = 0x2CE590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE58Cu;
            // 0x2ce590: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE594u; }
        if (ctx->pc != 0x2CE594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE594u; }
        if (ctx->pc != 0x2CE594u) { return; }
    }
    ctx->pc = 0x2CE594u;
label_2ce594:
    // 0x2ce594: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2ce594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce598: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2CE598u;
    SET_GPR_U32(ctx, 31, 0x2CE5A0u);
    ctx->pc = 0x2CE59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE598u;
            // 0x2ce59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE5A0u; }
        if (ctx->pc != 0x2CE5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE5A0u; }
        if (ctx->pc != 0x2CE5A0u) { return; }
    }
    ctx->pc = 0x2CE5A0u;
label_2ce5a0:
    // 0x2ce5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE5A8u;
            // 0x2ce5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE5B0u;
}
