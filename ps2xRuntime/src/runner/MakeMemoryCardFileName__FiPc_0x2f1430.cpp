#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMemoryCardFileName__FiPc
// Address: 0x2f1430 - 0x2f14e4
void MakeMemoryCardFileName__FiPc_0x2f1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMemoryCardFileName__FiPc_0x2f1430");
#endif

    switch (ctx->pc) {
        case 0x2f1494u: goto label_2f1494;
        case 0x2f14a4u: goto label_2f14a4;
        case 0x2f14b4u: goto label_2f14b4;
        case 0x2f14c4u: goto label_2f14c4;
        case 0x2f14d0u: goto label_2f14d0;
        default: break;
    }

    ctx->pc = 0x2f1430u;

    // 0x2f1430: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f1434: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f1438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f1438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f143c: 0x2442cd20  addiu       $v0, $v0, -0x32E0
    ctx->pc = 0x2f143cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954272));
    // 0x2f1440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f1440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f1444: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2f1444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f1448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f144c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f144cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1450: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f1450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f1454: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2f1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f1458: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f1458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f145c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1460: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f1460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f1464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1468: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f1468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f146c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f146cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2f1470: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x2f1470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x2f1474: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2f1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2f1478: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2f1478u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f147c: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x2f147cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f1480: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x2f1480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2f1484: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x2f1484u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x2f1488: 0xa5030010  sh          $v1, 0x10($t0)
    ctx->pc = 0x2f1488u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f148c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F148Cu;
    SET_GPR_U32(ctx, 31, 0x2F1494u);
    ctx->pc = 0x2F1490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F148Cu;
            // 0x2f1490: 0xa1020012  sb          $v0, 0x12($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1494u; }
        if (ctx->pc != 0x2F1494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1494u; }
        if (ctx->pc != 0x2F1494u) { return; }
    }
    ctx->pc = 0x2F1494u;
label_2f1494:
    // 0x2f1494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f1494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f1498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f1498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f149c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2F149Cu;
    SET_GPR_U32(ctx, 31, 0x2F14A4u);
    ctx->pc = 0x2F14A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F149Cu;
            // 0x2f14a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14A4u; }
        if (ctx->pc != 0x2F14A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14A4u; }
        if (ctx->pc != 0x2F14A4u) { return; }
    }
    ctx->pc = 0x2F14A4u;
label_2f14a4:
    // 0x2f14a4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F14A4u;
    {
        const bool branch_taken_0x2f14a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F14A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14A4u;
            // 0x2f14a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f14a4) {
            ctx->pc = 0x2F14D0u;
            goto label_2f14d0;
        }
    }
    ctx->pc = 0x2F14ACu;
    // 0x2f14ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2F14ACu;
    SET_GPR_U32(ctx, 31, 0x2F14B4u);
    ctx->pc = 0x2F14B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14ACu;
            // 0x2f14b0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14B4u; }
        if (ctx->pc != 0x2F14B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14B4u; }
        if (ctx->pc != 0x2F14B4u) { return; }
    }
    ctx->pc = 0x2F14B4u;
label_2f14b4:
    // 0x2f14b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f14b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f14b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14bc: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F14BCu;
    SET_GPR_U32(ctx, 31, 0x2F14C4u);
    ctx->pc = 0x2F14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14BCu;
            // 0x2f14c0: 0x24a517b0  addiu       $a1, $a1, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14C4u; }
        if (ctx->pc != 0x2F14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14C4u; }
        if (ctx->pc != 0x2F14C4u) { return; }
    }
    ctx->pc = 0x2F14C4u;
label_2f14c4:
    // 0x2f14c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f14c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f14c8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2F14C8u;
    SET_GPR_U32(ctx, 31, 0x2F14D0u);
    ctx->pc = 0x2F14CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14C8u;
            // 0x2f14cc: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14D0u; }
        if (ctx->pc != 0x2F14D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F14D0u; }
        if (ctx->pc != 0x2F14D0u) { return; }
    }
    ctx->pc = 0x2F14D0u;
label_2f14d0:
    // 0x2f14d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f14d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f14d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f14d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f14d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f14dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F14DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F14E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F14DCu;
            // 0x2f14e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F14E4u;
}
