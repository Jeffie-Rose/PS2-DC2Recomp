#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNetaBoardCursorPosition__11CMenuInventFiPi
// Address: 0x2084a0 - 0x208534
void GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0");
#endif

    switch (ctx->pc) {
        case 0x2084ccu: goto label_2084cc;
        case 0x2084dcu: goto label_2084dc;
        case 0x208500u: goto label_208500;
        case 0x208518u: goto label_208518;
        default: break;
    }

    ctx->pc = 0x2084a0u;

    // 0x2084a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2084a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2084a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2084a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2084a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2084a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2084ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2084acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2084b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2084b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2084b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2084b8: 0x580c0  sll         $s0, $a1, 3
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2084bc: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2084c0: 0xc44c0264  lwc1        $f12, 0x264($v0)
    ctx->pc = 0x2084c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2084c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2084C4u;
    SET_GPR_U32(ctx, 31, 0x2084CCu);
    ctx->pc = 0x2084C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084C4u;
            // 0x2084c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084CCu; }
        if (ctx->pc != 0x2084CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084CCu; }
        if (ctx->pc != 0x2084CCu) { return; }
    }
    ctx->pc = 0x2084CCu;
label_2084cc:
    // 0x2084cc: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2084d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2084d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2084d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2084D4u;
    SET_GPR_U32(ctx, 31, 0x2084DCu);
    ctx->pc = 0x2084D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084D4u;
            // 0x2084d8: 0xc46c0268  lwc1        $f12, 0x268($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084DCu; }
        if (ctx->pc != 0x2084DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084DCu; }
        if (ctx->pc != 0x2084DCu) { return; }
    }
    ctx->pc = 0x2084DCu;
label_2084dc:
    // 0x2084dc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2084dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2084e0: 0x8e420ec0  lw          $v0, 0xEC0($s2)
    ctx->pc = 0x2084e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3776)));
    // 0x2084e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2084E4u;
    {
        const bool branch_taken_0x2084e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2084e4) {
            ctx->pc = 0x208504u;
            goto label_208504;
        }
    }
    ctx->pc = 0x2084ECu;
    // 0x2084ec: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2084ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2084f0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2084f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2084f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2084f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2084f8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2084F8u;
    SET_GPR_U32(ctx, 31, 0x208500u);
    ctx->pc = 0x2084FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2084F8u;
            // 0x2084fc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208500u; }
        if (ctx->pc != 0x208500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208500u; }
        if (ctx->pc != 0x208500u) { return; }
    }
    ctx->pc = 0x208500u;
label_208500:
    // 0x208500: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x208500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_208504:
    // 0x208504: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x208504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208508: 0xc640025c  lwc1        $f0, 0x25C($s2)
    ctx->pc = 0x208508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20850c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20850cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x208510: 0xc0a248c  jal         func_289230
    ctx->pc = 0x208510u;
    SET_GPR_U32(ctx, 31, 0x208518u);
    ctx->pc = 0x208514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x208510u;
            // 0x208514: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208518u; }
        if (ctx->pc != 0x208518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208518u; }
        if (ctx->pc != 0x208518u) { return; }
    }
    ctx->pc = 0x208518u;
label_208518:
    // 0x208518: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x208518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20851c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x208520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x208524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x208528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20852c: 0x3e00008  jr          $ra
    ctx->pc = 0x20852Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20852Cu;
            // 0x208530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208534u;
}
