#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CNameRegiMenuFv
// Address: 0x30a6d0 - 0x30a8c8
void ps2___ct__13CNameRegiMenuFv_0x30a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CNameRegiMenuFv_0x30a6d0");
#endif

    switch (ctx->pc) {
        case 0x30a6e8u: goto label_30a6e8;
        case 0x30a6fcu: goto label_30a6fc;
        case 0x30a700u: goto label_30a700;
        case 0x30a708u: goto label_30a708;
        case 0x30a768u: goto label_30a768;
        case 0x30a7c4u: goto label_30a7c4;
        case 0x30a7d4u: goto label_30a7d4;
        case 0x30a7e0u: goto label_30a7e0;
        case 0x30a7f0u: goto label_30a7f0;
        case 0x30a7fcu: goto label_30a7fc;
        case 0x30a80cu: goto label_30a80c;
        case 0x30a848u: goto label_30a848;
        case 0x30a874u: goto label_30a874;
        case 0x30a8a4u: goto label_30a8a4;
        case 0x30a8b0u: goto label_30a8b0;
        default: break;
    }

    ctx->pc = 0x30a6d0u;

    // 0x30a6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a6d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a6dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a6e0: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x30A6E0u;
    SET_GPR_U32(ctx, 31, 0x30A6E8u);
    ctx->pc = 0x30A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A6E0u;
            // 0x30a6e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A6E8u; }
        if (ctx->pc != 0x30A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A6E8u; }
        if (ctx->pc != 0x30A6E8u) { return; }
    }
    ctx->pc = 0x30A6E8u;
label_30a6e8:
    // 0x30a6e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x30a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x30a6ec: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30a6f0: 0x24426460  addiu       $v0, $v0, 0x6460
    ctx->pc = 0x30a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25696));
    // 0x30a6f4: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x30A6F4u;
    SET_GPR_U32(ctx, 31, 0x30A6FCu);
    ctx->pc = 0x30A6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A6F4u;
            // 0x30a6f8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A6FCu; }
        if (ctx->pc != 0x30A6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A6FCu; }
        if (ctx->pc != 0x30A6FCu) { return; }
    }
    ctx->pc = 0x30A6FCu;
label_30a6fc:
    // 0x30a6fc: 0x26110300  addiu       $s1, $s0, 0x300
    ctx->pc = 0x30a6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_30a700:
    // 0x30a700: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x30A700u;
    SET_GPR_U32(ctx, 31, 0x30A708u);
    ctx->pc = 0x30A704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A700u;
            // 0x30a704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A708u; }
        if (ctx->pc != 0x30A708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A708u; }
        if (ctx->pc != 0x30A708u) { return; }
    }
    ctx->pc = 0x30A708u;
label_30a708:
    // 0x30a708: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x30a708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x30a70c: 0x260203b0  addiu       $v0, $s0, 0x3B0
    ctx->pc = 0x30a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x30a710: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x30a710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30a714: 0x0  nop
    ctx->pc = 0x30a714u;
    // NOP
    // 0x30a718: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30A718u;
    {
        const bool branch_taken_0x30a718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a718) {
            ctx->pc = 0x30A700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a700;
        }
    }
    ctx->pc = 0x30A720u;
    // 0x30a720: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x30a720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x30a724: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x30a724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x30a728: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x30a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x30a72c: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x30a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x30a730: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30a734: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A734u;
    {
        const bool branch_taken_0x30a734 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30a734) {
            ctx->pc = 0x30A744u;
            goto label_30a744;
        }
    }
    ctx->pc = 0x30A73Cu;
    // 0x30a73c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a740: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x30a740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_30a744:
    // 0x30a744: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x30a744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x30a748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a74c: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x30a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x30a750: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x30a750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a754: 0xa2020130  sb          $v0, 0x130($s0)
    ctx->pc = 0x30a754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 304), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a75c: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x30a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x30a760: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x30a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x30a764: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x30a764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
label_30a768:
    // 0x30a768: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x30a768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x30a76c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x30a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30a770: 0xa4a00158  sh          $zero, 0x158($a1)
    ctx->pc = 0x30a770u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a774: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x30a774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x30a778: 0xa4a0015a  sh          $zero, 0x15A($a1)
    ctx->pc = 0x30a778u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a77c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x30a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x30a780: 0xa4a0015c  sh          $zero, 0x15C($a1)
    ctx->pc = 0x30a780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a784: 0xa4a0015e  sh          $zero, 0x15E($a1)
    ctx->pc = 0x30a784u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a788: 0xa4a00160  sh          $zero, 0x160($a1)
    ctx->pc = 0x30a788u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a78c: 0xa4a00162  sh          $zero, 0x162($a1)
    ctx->pc = 0x30a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a790: 0xa4a00164  sh          $zero, 0x164($a1)
    ctx->pc = 0x30a790u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x30a794: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30A794u;
    {
        const bool branch_taken_0x30a794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A794u;
            // 0x30a798: 0xa4a00166  sh          $zero, 0x166($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 358), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a794) {
            ctx->pc = 0x30A768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a768;
        }
    }
    ctx->pc = 0x30A79Cu;
    // 0x30a79c: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x30a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x30a7a0: 0x26040238  addiu       $a0, $s0, 0x238
    ctx->pc = 0x30a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x30a7a4: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x30a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x30a7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a7ac: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x30a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x30a7b0: 0x24060061  addiu       $a2, $zero, 0x61
    ctx->pc = 0x30a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x30a7b4: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x30a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x30a7b8: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x30a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x30a7bc: 0xc049c86  jal         func_127218
    ctx->pc = 0x30A7BCu;
    SET_GPR_U32(ctx, 31, 0x30A7C4u);
    ctx->pc = 0x30A7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7BCu;
            // 0x30a7c0: 0xa6000006  sh          $zero, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7C4u; }
        if (ctx->pc != 0x30A7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7C4u; }
        if (ctx->pc != 0x30A7C4u) { return; }
    }
    ctx->pc = 0x30A7C4u;
label_30a7c4:
    // 0x30a7c4: 0x26040299  addiu       $a0, $s0, 0x299
    ctx->pc = 0x30a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 665));
    // 0x30a7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a7cc: 0xc049c86  jal         func_127218
    ctx->pc = 0x30A7CCu;
    SET_GPR_U32(ctx, 31, 0x30A7D4u);
    ctx->pc = 0x30A7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7CCu;
            // 0x30a7d0: 0x24060061  addiu       $a2, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7D4u; }
        if (ctx->pc != 0x30A7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7D4u; }
        if (ctx->pc != 0x30A7D4u) { return; }
    }
    ctx->pc = 0x30A7D4u;
label_30a7d4:
    // 0x30a7d4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30a7d8: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x30A7D8u;
    SET_GPR_U32(ctx, 31, 0x30A7E0u);
    ctx->pc = 0x30A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7D8u;
            // 0x30a7dc: 0xae0002fc  sw          $zero, 0x2FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7E0u; }
        if (ctx->pc != 0x30A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7E0u; }
        if (ctx->pc != 0x30A7E0u) { return; }
    }
    ctx->pc = 0x30A7E0u;
label_30a7e0:
    // 0x30a7e0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30a7e4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30a7e8: 0xc0b512c  jal         func_2D44B0
    ctx->pc = 0x30A7E8u;
    SET_GPR_U32(ctx, 31, 0x30A7F0u);
    ctx->pc = 0x30A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7E8u;
            // 0x30a7ec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44B0u;
    if (runtime->hasFunction(0x2D44B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7F0u; }
        if (ctx->pc != 0x30A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetClearance__5CFontFii_0x2d44b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7F0u; }
        if (ctx->pc != 0x30A7F0u) { return; }
    }
    ctx->pc = 0x30A7F0u;
label_30a7f0:
    // 0x30a7f0: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30a7f4: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x30A7F4u;
    SET_GPR_U32(ctx, 31, 0x30A7FCu);
    ctx->pc = 0x30A7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A7F4u;
            // 0x30a7f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7FCu; }
        if (ctx->pc != 0x30A7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A7FCu; }
        if (ctx->pc != 0x30A7FCu) { return; }
    }
    ctx->pc = 0x30A7FCu;
label_30a7fc:
    // 0x30a7fc: 0x3c028068  lui         $v0, 0x8068
    ctx->pc = 0x30a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32872 << 16));
    // 0x30a800: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x30a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x30a804: 0xc0b5148  jal         func_2D4520
    ctx->pc = 0x30A804u;
    SET_GPR_U32(ctx, 31, 0x30A80Cu);
    ctx->pc = 0x30A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A804u;
            // 0x30a808: 0x34456a6b  ori         $a1, $v0, 0x6A6B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27243);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4520u;
    if (runtime->hasFunction(0x2D4520u)) {
        auto targetFn = runtime->lookupFunction(0x2D4520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A80Cu; }
        if (ctx->pc != 0x30A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFUi_0x2d4520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A80Cu; }
        if (ctx->pc != 0x30A80Cu) { return; }
    }
    ctx->pc = 0x30A80Cu;
label_30a80c:
    // 0x30a80c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x30a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x30a810: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x30a810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x30a814: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x30a814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x30a818: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x30a818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x30a81c: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x30a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30a820: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A820u;
    {
        const bool branch_taken_0x30a820 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30a820) {
            ctx->pc = 0x30A830u;
            goto label_30a830;
        }
    }
    ctx->pc = 0x30A828u;
    // 0x30a828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a82c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x30a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_30a830:
    // 0x30a830: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30a830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30a834: 0x260503b8  addiu       $a1, $s0, 0x3B8
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 952));
    // 0x30a838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30a838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a83c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x30a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30a840: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30A840u;
    {
        const bool branch_taken_0x30a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A840u;
            // 0x30a844: 0x2463de00  addiu       $v1, $v1, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a840) {
            ctx->pc = 0x30A888u;
            goto label_30a888;
        }
    }
    ctx->pc = 0x30A848u;
label_30a848:
    // 0x30a848: 0x8163c  dsll32      $v0, $t0, 24
    ctx->pc = 0x30a848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 24));
    // 0x30a84c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x30a84cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x30a850: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A850u;
    {
        const bool branch_taken_0x30a850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x30a850) {
            ctx->pc = 0x30A86Cu;
            goto label_30a86c;
        }
    }
    ctx->pc = 0x30A858u;
    // 0x30a858: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x30a858u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x30a85c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30a85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30a860: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x30a860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30a864: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x30a864u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a868: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x30a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_30a86c:
    // 0x30a86c: 0x0  nop
    ctx->pc = 0x30a86cu;
    // NOP
    // 0x30a870: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30a870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_30a874:
    // 0x30a874: 0x0  nop
    ctx->pc = 0x30a874u;
    // NOP
    // 0x30a878: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30a87c: 0x1500fff2  bnez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x30A87Cu;
    {
        const bool branch_taken_0x30a87c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a87c) {
            ctx->pc = 0x30A848u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a848;
        }
    }
    ctx->pc = 0x30A884u;
    // 0x30a884: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x30a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_30a888:
    // 0x30a888: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x30a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30a88c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x30a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a890: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30A890u;
    {
        const bool branch_taken_0x30a890 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a890) {
            ctx->pc = 0x30A874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a874;
        }
    }
    ctx->pc = 0x30A898u;
    // 0x30a898: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x30a898u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a89c: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30A89Cu;
    SET_GPR_U32(ctx, 31, 0x30A8A4u);
    ctx->pc = 0x30A8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A89Cu;
            // 0x30a8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A8A4u; }
        if (ctx->pc != 0x30A8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A8A4u; }
        if (ctx->pc != 0x30A8A4u) { return; }
    }
    ctx->pc = 0x30A8A4u;
label_30a8a4:
    // 0x30a8a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8a8: 0xc0c349c  jal         func_30D270
    ctx->pc = 0x30A8A8u;
    SET_GPR_U32(ctx, 31, 0x30A8B0u);
    ctx->pc = 0x30A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A8A8u;
            // 0x30a8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30D270u;
    if (runtime->hasFunction(0x30D270u)) {
        auto targetFn = runtime->lookupFunction(0x30D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A8B0u; }
        if (ctx->pc != 0x30A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeFontSelectMode__13CNameRegiMenuFi_0x30d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A8B0u; }
        if (ctx->pc != 0x30A8B0u) { return; }
    }
    ctx->pc = 0x30A8B0u;
label_30a8b0:
    // 0x30a8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30a8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A8C0u;
            // 0x30a8c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A8C8u;
}
