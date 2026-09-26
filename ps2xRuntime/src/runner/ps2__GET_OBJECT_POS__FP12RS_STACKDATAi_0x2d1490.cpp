#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_OBJECT_POS__FP12RS_STACKDATAi
// Address: 0x2d1490 - 0x2d151c
void ps2__GET_OBJECT_POS__FP12RS_STACKDATAi_0x2d1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_OBJECT_POS__FP12RS_STACKDATAi_0x2d1490");
#endif

    switch (ctx->pc) {
        case 0x2d14b4u: goto label_2d14b4;
        case 0x2d14c4u: goto label_2d14c4;
        case 0x2d14dcu: goto label_2d14dc;
        case 0x2d14ecu: goto label_2d14ec;
        case 0x2d14fcu: goto label_2d14fc;
        case 0x2d1508u: goto label_2d1508;
        default: break;
    }

    ctx->pc = 0x2d1490u;

    // 0x2d1490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1494: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d1494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d149c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D149Cu;
    {
        const bool branch_taken_0x2d149c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D14A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D149Cu;
            // 0x2d14a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d149c) {
            ctx->pc = 0x2D14ACu;
            goto label_2d14ac;
        }
    }
    ctx->pc = 0x2D14A4u;
    // 0x2d14a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D14A4u;
    {
        const bool branch_taken_0x2d14a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14A4u;
            // 0x2d14a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14a4) {
            ctx->pc = 0x2D150Cu;
            goto label_2d150c;
        }
    }
    ctx->pc = 0x2D14ACu;
label_2d14ac:
    // 0x2d14ac: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2D14ACu;
    SET_GPR_U32(ctx, 31, 0x2D14B4u);
    ctx->pc = 0x2D14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14ACu;
            // 0x2d14b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14B4u; }
        if (ctx->pc != 0x2D14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14B4u; }
        if (ctx->pc != 0x2D14B4u) { return; }
    }
    ctx->pc = 0x2D14B4u;
label_2d14b4:
    // 0x2d14b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d14b8: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d14bc: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x2D14BCu;
    SET_GPR_U32(ctx, 31, 0x2D14C4u);
    ctx->pc = 0x2D14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14BCu;
            // 0x2d14c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14C4u; }
        if (ctx->pc != 0x2D14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14C4u; }
        if (ctx->pc != 0x2D14C4u) { return; }
    }
    ctx->pc = 0x2D14C4u;
label_2d14c4:
    // 0x2d14c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D14C4u;
    {
        const bool branch_taken_0x2d14c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D14C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14C4u;
            // 0x2d14c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14c4) {
            ctx->pc = 0x2D14D4u;
            goto label_2d14d4;
        }
    }
    ctx->pc = 0x2D14CCu;
    // 0x2d14cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D14CCu;
    {
        const bool branch_taken_0x2d14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D14D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14CCu;
            // 0x2d14d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14cc) {
            ctx->pc = 0x2D150Cu;
            goto label_2d150c;
        }
    }
    ctx->pc = 0x2D14D4u;
label_2d14d4:
    // 0x2d14d4: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2D14D4u;
    SET_GPR_U32(ctx, 31, 0x2D14DCu);
    ctx->pc = 0x2D14D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14D4u;
            // 0x2d14d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14DCu; }
        if (ctx->pc != 0x2D14DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14DCu; }
        if (ctx->pc != 0x2D14DCu) { return; }
    }
    ctx->pc = 0x2D14DCu;
label_2d14dc:
    // 0x2d14dc: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2d14dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d14e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d14e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14e4: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2D14E4u;
    SET_GPR_U32(ctx, 31, 0x2D14ECu);
    ctx->pc = 0x2D14E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14E4u;
            // 0x2d14e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14ECu; }
        if (ctx->pc != 0x2D14ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14ECu; }
        if (ctx->pc != 0x2D14ECu) { return; }
    }
    ctx->pc = 0x2D14ECu;
label_2d14ec:
    // 0x2d14ec: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2d14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d14f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d14f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14f4: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2D14F4u;
    SET_GPR_U32(ctx, 31, 0x2D14FCu);
    ctx->pc = 0x2D14F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D14F4u;
            // 0x2d14f8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14FCu; }
        if (ctx->pc != 0x2D14FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D14FCu; }
        if (ctx->pc != 0x2D14FCu) { return; }
    }
    ctx->pc = 0x2D14FCu;
label_2d14fc:
    // 0x2d14fc: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2d14fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1500: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2D1500u;
    SET_GPR_U32(ctx, 31, 0x2D1508u);
    ctx->pc = 0x2D1504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1500u;
            // 0x2d1504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1508u; }
        if (ctx->pc != 0x2D1508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1508u; }
        if (ctx->pc != 0x2D1508u) { return; }
    }
    ctx->pc = 0x2D1508u;
label_2d1508:
    // 0x2d1508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d150c:
    // 0x2d150c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1514: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1514u;
            // 0x2d1518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D151Cu;
}
