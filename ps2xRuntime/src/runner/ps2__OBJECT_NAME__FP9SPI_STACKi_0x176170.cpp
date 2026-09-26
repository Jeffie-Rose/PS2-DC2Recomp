#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJECT_NAME__FP9SPI_STACKi
// Address: 0x176170 - 0x176328
void ps2__OBJECT_NAME__FP9SPI_STACKi_0x176170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJECT_NAME__FP9SPI_STACKi_0x176170");
#endif

    switch (ctx->pc) {
        case 0x1761b4u: goto label_1761b4;
        case 0x1761f8u: goto label_1761f8;
        case 0x17625cu: goto label_17625c;
        case 0x176274u: goto label_176274;
        case 0x176280u: goto label_176280;
        case 0x17628cu: goto label_17628c;
        default: break;
    }

    ctx->pc = 0x176170u;

    // 0x176170: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x176170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x176174: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176178: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x176178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17617c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x176180: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x176184: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176188: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x176188u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17618c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x176190: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x176190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17619c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1761a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1761a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1761a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1761a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1761a8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1761ac: 0x8f8589a8  lw          $a1, -0x7658($gp)
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1761b0: 0x0  nop
    ctx->pc = 0x1761b0u;
    // NOP
label_1761b4:
    // 0x1761b4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1761b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1761b8: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1761bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1761BCu;
    {
        const bool branch_taken_0x1761bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1761bc) {
            ctx->pc = 0x1761CCu;
            goto label_1761cc;
        }
    }
    ctx->pc = 0x1761C4u;
    // 0x1761c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1761C4u;
    {
        const bool branch_taken_0x1761c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761C4u;
            // 0x1761c8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761c4) {
            ctx->pc = 0x1761DCu;
            goto label_1761dc;
        }
    }
    ctx->pc = 0x1761CCu;
label_1761cc:
    // 0x1761cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1761ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1761d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1761d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1761d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1761D4u;
    {
        const bool branch_taken_0x1761d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1761D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761D4u;
            // 0x1761d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761d4) {
            ctx->pc = 0x1761B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1761b4;
        }
    }
    ctx->pc = 0x1761DCu;
label_1761dc:
    // 0x1761dc: 0x0  nop
    ctx->pc = 0x1761dcu;
    // NOP
    // 0x1761e0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1761e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1761e4: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1761E4u;
    {
        const bool branch_taken_0x1761e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x1761E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761E4u;
            // 0x1761e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761e4) {
            ctx->pc = 0x1761F4u;
            goto label_1761f4;
        }
    }
    ctx->pc = 0x1761ECu;
    // 0x1761ec: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1761ECu;
    {
        const bool branch_taken_0x1761ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1761ECu;
            // 0x1761f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761ec) {
            ctx->pc = 0x1762FCu;
            goto label_1762fc;
        }
    }
    ctx->pc = 0x1761F4u;
label_1761f4:
    // 0x1761f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1761f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1761f8:
    // 0x1761f8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1761fc: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1761fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x176200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176200u;
    {
        const bool branch_taken_0x176200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176200) {
            ctx->pc = 0x176210u;
            goto label_176210;
        }
    }
    ctx->pc = 0x176208u;
    // 0x176208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176208u;
    {
        const bool branch_taken_0x176208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176208u;
            // 0x17620c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176208) {
            ctx->pc = 0x176220u;
            goto label_176220;
        }
    }
    ctx->pc = 0x176210u;
label_176210:
    // 0x176210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176214: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x176214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x176218: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x176218u;
    {
        const bool branch_taken_0x176218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176218u;
            // 0x17621c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176218) {
            ctx->pc = 0x1761F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1761f8;
        }
    }
    ctx->pc = 0x176220u;
label_176220:
    // 0x176220: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176224: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176224u;
    {
        const bool branch_taken_0x176224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x176228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176224u;
            // 0x176228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176224) {
            ctx->pc = 0x176234u;
            goto label_176234;
        }
    }
    ctx->pc = 0x17622Cu;
    // 0x17622c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17622Cu;
    {
        const bool branch_taken_0x17622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17622Cu;
            // 0x176230: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17622c) {
            ctx->pc = 0x176300u;
            goto label_176300;
        }
    }
    ctx->pc = 0x176234u;
label_176234:
    // 0x176234: 0x8cb70070  lw          $s7, 0x70($a1)
    ctx->pc = 0x176234u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x176238: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x176238u;
    {
        const bool branch_taken_0x176238 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x17623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176238u;
            // 0x17623c: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176238) {
            ctx->pc = 0x176248u;
            goto label_176248;
        }
    }
    ctx->pc = 0x176240u;
    // 0x176240: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x176240u;
    {
        const bool branch_taken_0x176240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176240u;
            // 0x176244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176240) {
            ctx->pc = 0x1762FCu;
            goto label_1762fc;
        }
    }
    ctx->pc = 0x176248u;
label_176248:
    // 0x176248: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x176248u;
    {
        const bool branch_taken_0x176248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17624Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176248u;
            // 0x17624c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176248) {
            ctx->pc = 0x1762F8u;
            goto label_1762f8;
        }
    }
    ctx->pc = 0x176250u;
    // 0x176250: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x176250u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x176254: 0x11a100  sll         $s4, $s1, 4
    ctx->pc = 0x176254u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x176258: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x176258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_17625c:
    // 0x17625c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17625Cu;
    {
        const bool branch_taken_0x17625c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17625Cu;
            // 0x176260: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17625c) {
            ctx->pc = 0x17626Cu;
            goto label_17626c;
        }
    }
    ctx->pc = 0x176264u;
    // 0x176264: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x176264u;
    {
        const bool branch_taken_0x176264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176264u;
            // 0x176268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176264) {
            ctx->pc = 0x1762FCu;
            goto label_1762fc;
        }
    }
    ctx->pc = 0x17626Cu;
label_17626c:
    // 0x17626c: 0xc05191c  jal         func_146470
    ctx->pc = 0x17626Cu;
    SET_GPR_U32(ctx, 31, 0x176274u);
    ctx->pc = 0x176270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17626Cu;
            // 0x176270: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176274u; }
        if (ctx->pc != 0x176274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176274u; }
        if (ctx->pc != 0x176274u) { return; }
    }
    ctx->pc = 0x176274u;
label_176274:
    // 0x176274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176278: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176278u;
    SET_GPR_U32(ctx, 31, 0x176280u);
    ctx->pc = 0x17627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176278u;
            // 0x17627c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176280u; }
        if (ctx->pc != 0x176280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176280u; }
        if (ctx->pc != 0x176280u) { return; }
    }
    ctx->pc = 0x176280u;
label_176280:
    // 0x176280: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x176280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176284: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x176284u;
    SET_GPR_U32(ctx, 31, 0x17628Cu);
    ctx->pc = 0x176288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176284u;
            // 0x176288: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17628Cu; }
        if (ctx->pc != 0x17628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17628Cu; }
        if (ctx->pc != 0x17628Cu) { return; }
    }
    ctx->pc = 0x17628Cu;
label_17628c:
    // 0x17628c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17628Cu;
    {
        const bool branch_taken_0x17628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17628c) {
            ctx->pc = 0x1762E4u;
            goto label_1762e4;
        }
    }
    ctx->pc = 0x176294u;
    // 0x176294: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x176294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x176298: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17629c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17629cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1762a0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1762a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1762a4: 0xac820138  sw          $v0, 0x138($a0)
    ctx->pc = 0x1762a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 2));
    // 0x1762a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1762a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1762ac: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x1762acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1762b0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1762b4: 0xac820140  sw          $v0, 0x140($a0)
    ctx->pc = 0x1762b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 2));
    // 0x1762b8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1762b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1762bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1762c0: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x1762c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x1762c4: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1762c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1762c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1762cc: 0xac510148  sw          $s1, 0x148($v0)
    ctx->pc = 0x1762ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 17));
    // 0x1762d0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1762d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1762d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1762d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1762d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1762dc: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x1762dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x1762e0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1762e4:
    // 0x1762e4: 0x0  nop
    ctx->pc = 0x1762e4u;
    // NOP
    // 0x1762e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1762e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1762ec: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x1762ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1762f0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1762F0u;
    {
        const bool branch_taken_0x1762f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1762F0u;
            // 0x1762f4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762f0) {
            ctx->pc = 0x17625Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17625c;
        }
    }
    ctx->pc = 0x1762F8u;
label_1762f8:
    // 0x1762f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1762f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1762fc:
    // 0x1762fc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1762fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_176300:
    // 0x176300: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176304: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x176304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176308: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17630c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17630cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176310: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176314: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176318: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17631c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17631cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176320: 0x3e00008  jr          $ra
    ctx->pc = 0x176320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176320u;
            // 0x176324: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176328u;
}
