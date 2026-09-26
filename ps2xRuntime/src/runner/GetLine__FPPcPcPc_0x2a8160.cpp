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
// Address: 0x2a8160 - 0x2a8300
void GetLine__FPPcPcPc_0x2a8160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLine__FPPcPcPc_0x2a8160");
#endif

    switch (ctx->pc) {
        case 0x2a81a8u: goto label_2a81a8;
        case 0x2a81b4u: goto label_2a81b4;
        case 0x2a81d0u: goto label_2a81d0;
        case 0x2a81f0u: goto label_2a81f0;
        case 0x2a8208u: goto label_2a8208;
        case 0x2a8218u: goto label_2a8218;
        case 0x2a822cu: goto label_2a822c;
        case 0x2a8240u: goto label_2a8240;
        default: break;
    }

    ctx->pc = 0x2a8160u;

    // 0x2a8160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a8164: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a8168: 0x27a3007c  addiu       $v1, $sp, 0x7C
    ctx->pc = 0x2a8168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2a816c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a816cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a8170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a8174: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a8178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a817c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a817cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a8188: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a818c: 0x87828478  lh          $v0, -0x7B88($gp)
    ctx->pc = 0x2a818cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x2a8190: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8194: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x2a8194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a8198: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A8198u;
    {
        const bool branch_taken_0x2a8198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8198u;
            // 0x2a819c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8198) {
            ctx->pc = 0x2A82D4u;
            goto label_2a82d4;
        }
    }
    ctx->pc = 0x2A81A0u;
    // 0x2a81a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a81a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81a4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2a81a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2a81a8:
    // 0x2a81a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a81a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81ac: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A81ACu;
    SET_GPR_U32(ctx, 31, 0x2A81B4u);
    ctx->pc = 0x2A81B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81ACu;
            // 0x2a81b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81B4u; }
        if (ctx->pc != 0x2A81B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81B4u; }
        if (ctx->pc != 0x2A81B4u) { return; }
    }
    ctx->pc = 0x2A81B4u;
label_2a81b4:
    // 0x2a81b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A81B4u;
    {
        const bool branch_taken_0x2a81b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A81B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81B4u;
            // 0x2a81b8: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81b4) {
            ctx->pc = 0x2A81C4u;
            goto label_2a81c4;
        }
    }
    ctx->pc = 0x2A81BCu;
    // 0x2a81bc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2A81BCu;
    {
        const bool branch_taken_0x2a81bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81BCu;
            // 0x2a81c0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81bc) {
            ctx->pc = 0x2A82D4u;
            goto label_2a82d4;
        }
    }
    ctx->pc = 0x2A81C4u;
label_2a81c4:
    // 0x2a81c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a81c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81c8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A81C8u;
    SET_GPR_U32(ctx, 31, 0x2A81D0u);
    ctx->pc = 0x2A81CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81C8u;
            // 0x2a81cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81D0u; }
        if (ctx->pc != 0x2A81D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81D0u; }
        if (ctx->pc != 0x2A81D0u) { return; }
    }
    ctx->pc = 0x2A81D0u;
label_2a81d0:
    // 0x2a81d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A81D0u;
    {
        const bool branch_taken_0x2a81d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A81D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81D0u;
            // 0x2a81d4: 0x27b5007d  addiu       $s5, $sp, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81d0) {
            ctx->pc = 0x2A81E0u;
            goto label_2a81e0;
        }
    }
    ctx->pc = 0x2A81D8u;
    // 0x2a81d8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2A81D8u;
    {
        const bool branch_taken_0x2a81d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81D8u;
            // 0x2a81dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81d8) {
            ctx->pc = 0x2A82D4u;
            goto label_2a82d4;
        }
    }
    ctx->pc = 0x2A81E0u;
label_2a81e0:
    // 0x2a81e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a81e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a81e8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A81E8u;
    SET_GPR_U32(ctx, 31, 0x2A81F0u);
    ctx->pc = 0x2A81ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81E8u;
            // 0x2a81ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81F0u; }
        if (ctx->pc != 0x2A81F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A81F0u; }
        if (ctx->pc != 0x2A81F0u) { return; }
    }
    ctx->pc = 0x2A81F0u;
label_2a81f0:
    // 0x2a81f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A81F0u;
    {
        const bool branch_taken_0x2a81f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A81F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81F0u;
            // 0x2a81f4: 0x230082b  sltu        $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81f0) {
            ctx->pc = 0x2A8200u;
            goto label_2a8200;
        }
    }
    ctx->pc = 0x2A81F8u;
    // 0x2a81f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2A81F8u;
    {
        const bool branch_taken_0x2a81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A81FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A81F8u;
            // 0x2a81fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a81f8) {
            ctx->pc = 0x2A82D4u;
            goto label_2a82d4;
        }
    }
    ctx->pc = 0x2A8200u;
label_2a8200:
    // 0x2a8200: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A8200u;
    {
        const bool branch_taken_0x2a8200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8200u;
            // 0x2a8204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8200) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A8208u;
label_2a8208:
    // 0x2a8208: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2a8208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2a820c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a820cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8210: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A8210u;
    SET_GPR_U32(ctx, 31, 0x2A8218u);
    ctx->pc = 0x2A8214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8210u;
            // 0x2a8214: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8218u; }
        if (ctx->pc != 0x2A8218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8218u; }
        if (ctx->pc != 0x2A8218u) { return; }
    }
    ctx->pc = 0x2A8218u;
label_2a8218:
    // 0x2a8218: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A8218u;
    {
        const bool branch_taken_0x2a8218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8218u;
            // 0x2a821c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8218) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A8220u;
    // 0x2a8220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8224: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A8224u;
    SET_GPR_U32(ctx, 31, 0x2A822Cu);
    ctx->pc = 0x2A8228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8224u;
            // 0x2a8228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A822Cu; }
        if (ctx->pc != 0x2A822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A822Cu; }
        if (ctx->pc != 0x2A822Cu) { return; }
    }
    ctx->pc = 0x2A822Cu;
label_2a822c:
    // 0x2a822c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A822Cu;
    {
        const bool branch_taken_0x2a822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A822Cu;
            // 0x2a8230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a822c) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A8234u;
    // 0x2a8234: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a8234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8238: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x2A8238u;
    SET_GPR_U32(ctx, 31, 0x2A8240u);
    ctx->pc = 0x2A823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8238u;
            // 0x2a823c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8240u; }
        if (ctx->pc != 0x2A8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8240u; }
        if (ctx->pc != 0x2A8240u) { return; }
    }
    ctx->pc = 0x2A8240u;
label_2a8240:
    // 0x2a8240: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A8240u;
    {
        const bool branch_taken_0x2a8240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8240) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A8248u;
    // 0x2a8248: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2a8248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a824c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2a824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a8250: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8250u;
    {
        const bool branch_taken_0x2a8250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A8254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8250u;
            // 0x2a8254: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8250) {
            ctx->pc = 0x2A826Cu;
            goto label_2a826c;
        }
    }
    ctx->pc = 0x2A8258u;
    // 0x2a8258: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a825c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A825Cu;
    {
        const bool branch_taken_0x2a825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A825Cu;
            // 0x2a8260: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a825c) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A8264u;
    // 0x2a8264: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A8264u;
    {
        const bool branch_taken_0x2a8264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8264u;
            // 0x2a8268: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8264) {
            ctx->pc = 0x2A82A8u;
            goto label_2a82a8;
        }
    }
    ctx->pc = 0x2A826Cu;
label_2a826c:
    // 0x2a826c: 0x0  nop
    ctx->pc = 0x2a826cu;
    // NOP
    // 0x2a8270: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a8274: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8274u;
    {
        const bool branch_taken_0x2a8274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A8278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8274u;
            // 0x2a8278: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8274) {
            ctx->pc = 0x2A8294u;
            goto label_2a8294;
        }
    }
    ctx->pc = 0x2A827Cu;
    // 0x2a827c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8280: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8280u;
    {
        const bool branch_taken_0x2a8280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8280) {
            ctx->pc = 0x2A8294u;
            goto label_2a8294;
        }
    }
    ctx->pc = 0x2A8288u;
    // 0x2a8288: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a828c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a828cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a8290: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a8290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a8294:
    // 0x2a8294: 0x0  nop
    ctx->pc = 0x2a8294u;
    // NOP
    // 0x2a8298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a8298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a829c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2a829cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a82a0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2A82A0u;
    {
        const bool branch_taken_0x2a82a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a82a0) {
            ctx->pc = 0x2A8208u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8208;
        }
    }
    ctx->pc = 0x2A82A8u;
label_2a82a8:
    // 0x2a82a8: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x2a82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2a82ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a82b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A82B0u;
    {
        const bool branch_taken_0x2a82b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a82b0) {
            ctx->pc = 0x2A82C4u;
            goto label_2a82c4;
        }
    }
    ctx->pc = 0x2A82B8u;
    // 0x2a82b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2a82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2a82bc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2a82bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2a82c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2a82c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a82c4:
    // 0x2a82c4: 0x0  nop
    ctx->pc = 0x2a82c4u;
    // NOP
    // 0x2a82c8: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2a82c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2a82cc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2A82CCu;
    {
        const bool branch_taken_0x2a82cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A82D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82CCu;
            // 0x2a82d0: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82cc) {
            ctx->pc = 0x2A81A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a81a8;
        }
    }
    ctx->pc = 0x2A82D4u;
label_2a82d4:
    // 0x2a82d4: 0x0  nop
    ctx->pc = 0x2a82d4u;
    // NOP
    // 0x2a82d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a82d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a82dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a82dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a82e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a82e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a82e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a82e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a82e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a82e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a82ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a82ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a82f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a82f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a82f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a82f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a82f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A82F8u;
            // 0x2a82fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8300u;
}
