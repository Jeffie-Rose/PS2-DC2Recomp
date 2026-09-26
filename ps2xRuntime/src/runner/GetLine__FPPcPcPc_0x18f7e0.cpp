#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLine__FPPcPcPc
// Address: 0x18f7e0 - 0x18f998
void GetLine__FPPcPcPc_0x18f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLine__FPPcPcPc_0x18f7e0");
#endif

    switch (ctx->pc) {
        case 0x18f828u: goto label_18f828;
        case 0x18f834u: goto label_18f834;
        case 0x18f850u: goto label_18f850;
        case 0x18f870u: goto label_18f870;
        case 0x18f888u: goto label_18f888;
        case 0x18f898u: goto label_18f898;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8c0u: goto label_18f8c0;
        default: break;
    }

    ctx->pc = 0x18f7e0u;

    // 0x18f7e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18f7e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18f7e8: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x18f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x18f7ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18f7f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f7f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f7f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18f800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f808: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18f808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f80c: 0x87828054  lh          $v0, -0x7FAC($gp)
    ctx->pc = 0x18f80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934612)));
    // 0x18f810: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18f810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f814: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x18f814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18f818: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x18F818u;
    {
        const bool branch_taken_0x18f818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F818u;
            // 0x18f81c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f818) {
            ctx->pc = 0x18F96Cu;
            goto label_18f96c;
        }
    }
    ctx->pc = 0x18F820u;
    // 0x18f820: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18f820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f824: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x18f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_18f828:
    // 0x18f828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f82c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F82Cu;
    SET_GPR_U32(ctx, 31, 0x18F834u);
    ctx->pc = 0x18F830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F82Cu;
            // 0x18f830: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F834u; }
        if (ctx->pc != 0x18F834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F834u; }
        if (ctx->pc != 0x18F834u) { return; }
    }
    ctx->pc = 0x18F834u;
label_18f834:
    // 0x18f834: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F834u;
    {
        const bool branch_taken_0x18f834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F834u;
            // 0x18f838: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f834) {
            ctx->pc = 0x18F844u;
            goto label_18f844;
        }
    }
    ctx->pc = 0x18F83Cu;
    // 0x18f83c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x18F83Cu;
    {
        const bool branch_taken_0x18f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F83Cu;
            // 0x18f840: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f83c) {
            ctx->pc = 0x18F96Cu;
            goto label_18f96c;
        }
    }
    ctx->pc = 0x18F844u;
label_18f844:
    // 0x18f844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f848: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F848u;
    SET_GPR_U32(ctx, 31, 0x18F850u);
    ctx->pc = 0x18F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F848u;
            // 0x18f84c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F850u; }
        if (ctx->pc != 0x18F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F850u; }
        if (ctx->pc != 0x18F850u) { return; }
    }
    ctx->pc = 0x18F850u;
label_18f850:
    // 0x18f850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F850u;
    {
        const bool branch_taken_0x18f850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F850u;
            // 0x18f854: 0x27b5007d  addiu       $s5, $sp, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f850) {
            ctx->pc = 0x18F860u;
            goto label_18f860;
        }
    }
    ctx->pc = 0x18F858u;
    // 0x18f858: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18F858u;
    {
        const bool branch_taken_0x18f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F858u;
            // 0x18f85c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f858) {
            ctx->pc = 0x18F96Cu;
            goto label_18f96c;
        }
    }
    ctx->pc = 0x18F860u;
label_18f860:
    // 0x18f860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f864: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18f864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f868: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F868u;
    SET_GPR_U32(ctx, 31, 0x18F870u);
    ctx->pc = 0x18F86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F868u;
            // 0x18f86c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F870u; }
        if (ctx->pc != 0x18F870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F870u; }
        if (ctx->pc != 0x18F870u) { return; }
    }
    ctx->pc = 0x18F870u;
label_18f870:
    // 0x18f870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F870u;
    {
        const bool branch_taken_0x18f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F870u;
            // 0x18f874: 0x230082b  sltu        $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f870) {
            ctx->pc = 0x18F880u;
            goto label_18f880;
        }
    }
    ctx->pc = 0x18F878u;
    // 0x18f878: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18F878u;
    {
        const bool branch_taken_0x18f878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F878u;
            // 0x18f87c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f878) {
            ctx->pc = 0x18F96Cu;
            goto label_18f96c;
        }
    }
    ctx->pc = 0x18F880u;
label_18f880:
    // 0x18f880: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x18F880u;
    {
        const bool branch_taken_0x18f880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F880u;
            // 0x18f884: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f880) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F888u;
label_18f888:
    // 0x18f888: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x18f88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f890: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F890u;
    SET_GPR_U32(ctx, 31, 0x18F898u);
    ctx->pc = 0x18F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F890u;
            // 0x18f894: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F898u; }
        if (ctx->pc != 0x18F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F898u; }
        if (ctx->pc != 0x18F898u) { return; }
    }
    ctx->pc = 0x18F898u;
label_18f898:
    // 0x18f898: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x18F898u;
    {
        const bool branch_taken_0x18f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F898u;
            // 0x18f89c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f898) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F8A0u;
    // 0x18f8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8a4: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F8A4u;
    SET_GPR_U32(ctx, 31, 0x18F8ACu);
    ctx->pc = 0x18F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8A4u;
            // 0x18f8a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8ACu; }
        if (ctx->pc != 0x18F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8ACu; }
        if (ctx->pc != 0x18F8ACu) { return; }
    }
    ctx->pc = 0x18F8ACu;
label_18f8ac:
    // 0x18f8ac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18F8ACu;
    {
        const bool branch_taken_0x18f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8ACu;
            // 0x18f8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8ac) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F8B4u;
    // 0x18f8b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18f8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f8b8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x18F8B8u;
    SET_GPR_U32(ctx, 31, 0x18F8C0u);
    ctx->pc = 0x18F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8B8u;
            // 0x18f8bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8C0u; }
        if (ctx->pc != 0x18F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F8C0u; }
        if (ctx->pc != 0x18F8C0u) { return; }
    }
    ctx->pc = 0x18F8C0u;
label_18f8c0:
    // 0x18f8c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18F8C0u;
    {
        const bool branch_taken_0x18f8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f8c0) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F8C8u;
    // 0x18f8c8: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x18f8c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18f8cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x18f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18f8d0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F8D0u;
    {
        const bool branch_taken_0x18f8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8D0u;
            // 0x18f8d4: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8d0) {
            ctx->pc = 0x18F8ECu;
            goto label_18f8ec;
        }
    }
    ctx->pc = 0x18F8D8u;
    // 0x18f8d8: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18F8D8u;
    {
        const bool branch_taken_0x18f8d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f8d8) {
            ctx->pc = 0x18F908u;
            goto label_18f908;
        }
    }
    ctx->pc = 0x18F8E0u;
    // 0x18f8e0: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x18f8e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18f8e4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F8E4u;
    {
        const bool branch_taken_0x18f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f8e4) {
            ctx->pc = 0x18F908u;
            goto label_18f908;
        }
    }
    ctx->pc = 0x18F8ECu;
label_18f8ec:
    // 0x18f8ec: 0x0  nop
    ctx->pc = 0x18f8ecu;
    // NOP
    // 0x18f8f0: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x18f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x18f8f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18f8f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18F8F8u;
    {
        const bool branch_taken_0x18f8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8F8u;
            // 0x18f8fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8f8) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F900u;
    // 0x18f900: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18F900u;
    {
        const bool branch_taken_0x18f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F900u;
            // 0x18f904: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f900) {
            ctx->pc = 0x18F940u;
            goto label_18f940;
        }
    }
    ctx->pc = 0x18F908u;
label_18f908:
    // 0x18f908: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x18f908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18f90c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F90Cu;
    {
        const bool branch_taken_0x18f90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18F910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F90Cu;
            // 0x18f910: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f90c) {
            ctx->pc = 0x18F92Cu;
            goto label_18f92c;
        }
    }
    ctx->pc = 0x18F914u;
    // 0x18f914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f918: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F918u;
    {
        const bool branch_taken_0x18f918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f918) {
            ctx->pc = 0x18F92Cu;
            goto label_18f92c;
        }
    }
    ctx->pc = 0x18F920u;
    // 0x18f920: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18f924: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x18f924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18f928: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18f92c:
    // 0x18f92c: 0x0  nop
    ctx->pc = 0x18f92cu;
    // NOP
    // 0x18f930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f934: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x18f934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18f938: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x18F938u;
    {
        const bool branch_taken_0x18f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f938) {
            ctx->pc = 0x18F888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f888;
        }
    }
    ctx->pc = 0x18F940u;
label_18f940:
    // 0x18f940: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x18f944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f948: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F948u;
    {
        const bool branch_taken_0x18f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f948) {
            ctx->pc = 0x18F95Cu;
            goto label_18f95c;
        }
    }
    ctx->pc = 0x18F950u;
    // 0x18f950: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18f954: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x18f954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x18f958: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x18f958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_18f95c:
    // 0x18f95c: 0x0  nop
    ctx->pc = 0x18f95cu;
    // NOP
    // 0x18f960: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x18f960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18f964: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x18F964u;
    {
        const bool branch_taken_0x18f964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F964u;
            // 0x18f968: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f964) {
            ctx->pc = 0x18F828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f828;
        }
    }
    ctx->pc = 0x18F96Cu;
label_18f96c:
    // 0x18f96c: 0x0  nop
    ctx->pc = 0x18f96cu;
    // NOP
    // 0x18f970: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18f970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f974: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18f974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18f978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18f97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18f980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f990: 0x3e00008  jr          $ra
    ctx->pc = 0x18F990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F990u;
            // 0x18f994: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F998u;
}
