#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Quake2__12CSceneCmrSeqFPfi
// Address: 0x25a6e0 - 0x25a760
void Quake2__12CSceneCmrSeqFPfi_0x25a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake2__12CSceneCmrSeqFPfi_0x25a6e0");
#endif

    switch (ctx->pc) {
        case 0x25a700u: goto label_25a700;
        case 0x25a720u: goto label_25a720;
        case 0x25a740u: goto label_25a740;
        default: break;
    }

    ctx->pc = 0x25a6e0u;

    // 0x25a6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a6e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25a6e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25a6ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a6f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25a6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a6f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25a6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a6f8: 0xc0966c8  jal         func_259B20
    ctx->pc = 0x25A6F8u;
    SET_GPR_U32(ctx, 31, 0x25A700u);
    ctx->pc = 0x25A6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A6F8u;
            // 0x25a6fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259B20u;
    if (runtime->hasFunction(0x259B20u)) {
        auto targetFn = runtime->lookupFunction(0x259B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A700u; }
        if (ctx->pc != 0x25A700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextQuakeSeq__12CSceneCmrSeqFv_0x259b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A700u; }
        if (ctx->pc != 0x25A700u) { return; }
    }
    ctx->pc = 0x25A700u;
label_25a700:
    // 0x25a700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a704: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25A704u;
    {
        const bool branch_taken_0x25a704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a704) {
            ctx->pc = 0x25A748u;
            goto label_25a748;
        }
    }
    ctx->pc = 0x25A70Cu;
    // 0x25a70c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x25a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x25a710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a714: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25a714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25a718: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A718u;
    SET_GPR_U32(ctx, 31, 0x25A720u);
    ctx->pc = 0x25A71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A718u;
            // 0x25a71c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A720u; }
        if (ctx->pc != 0x25A720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A720u; }
        if (ctx->pc != 0x25A720u) { return; }
    }
    ctx->pc = 0x25A720u;
label_25a720:
    // 0x25a720: 0x2a210000  slti        $at, $s1, 0x0
    ctx->pc = 0x25a720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25a724: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A724u;
    {
        const bool branch_taken_0x25a724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A724u;
            // 0x25a728: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a724) {
            ctx->pc = 0x25A740u;
            goto label_25a740;
        }
    }
    ctx->pc = 0x25A72Cu;
    // 0x25a72c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x25a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a730: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x25a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25a734: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25a734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a738: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25A738u;
    SET_GPR_U32(ctx, 31, 0x25A740u);
    ctx->pc = 0x25A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A738u;
            // 0x25a73c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A740u; }
        if (ctx->pc != 0x25A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A740u; }
        if (ctx->pc != 0x25A740u) { return; }
    }
    ctx->pc = 0x25A740u;
label_25a740:
    // 0x25a740: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x25a740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x25a744: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x25a744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_25a748:
    // 0x25a748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a74c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a758: 0x3e00008  jr          $ra
    ctx->pc = 0x25A758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A758u;
            // 0x25a75c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A760u;
}
