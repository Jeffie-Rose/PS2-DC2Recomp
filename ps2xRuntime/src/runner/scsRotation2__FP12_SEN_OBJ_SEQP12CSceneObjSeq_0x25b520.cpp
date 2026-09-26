#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsRotation2__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b520 - 0x25b88c
void scsRotation2__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsRotation2__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b520");
#endif

    switch (ctx->pc) {
        case 0x25b598u: goto label_25b598;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b608u: goto label_25b608;
        case 0x25b618u: goto label_25b618;
        case 0x25b650u: goto label_25b650;
        case 0x25b660u: goto label_25b660;
        case 0x25b748u: goto label_25b748;
        case 0x25b758u: goto label_25b758;
        case 0x25b7ecu: goto label_25b7ec;
        default: break;
    }

    ctx->pc = 0x25b520u;

    // 0x25b520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b528: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b52c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b530: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b534: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25b538: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B538u;
    {
        const bool branch_taken_0x25b538 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B538u;
            // 0x25b53c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b538) {
            ctx->pc = 0x25B548u;
            goto label_25b548;
        }
    }
    ctx->pc = 0x25B540u;
    // 0x25b540: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B540u;
    {
        const bool branch_taken_0x25b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B540u;
            // 0x25b544: 0x8e0300f4  lw          $v1, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b540) {
            ctx->pc = 0x25B55Cu;
            goto label_25b55c;
        }
    }
    ctx->pc = 0x25B548u;
label_25b548:
    // 0x25b548: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x25b548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x25b54c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B54Cu;
    {
        const bool branch_taken_0x25b54c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B54Cu;
            // 0x25b550: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b54c) {
            ctx->pc = 0x25B55Cu;
            goto label_25b55c;
        }
    }
    ctx->pc = 0x25B554u;
    // 0x25b554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b558: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x25b558u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_25b55c:
    // 0x25b55c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25b560: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x25b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25b564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b568: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25b568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b56c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B56Cu;
    {
        const bool branch_taken_0x25b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b56c) {
            ctx->pc = 0x25B580u;
            goto label_25b580;
        }
    }
    ctx->pc = 0x25B574u;
    // 0x25b574: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x25b574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x25b578: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x25B578u;
    {
        const bool branch_taken_0x25b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B578u;
            // 0x25b57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b578) {
            ctx->pc = 0x25B878u;
            goto label_25b878;
        }
    }
    ctx->pc = 0x25B580u;
label_25b580:
    // 0x25b580: 0x1c800027  bgtz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25B580u;
    {
        const bool branch_taken_0x25b580 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x25b580) {
            ctx->pc = 0x25B620u;
            goto label_25b620;
        }
    }
    ctx->pc = 0x25B588u;
    // 0x25b588: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b58c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25b590: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25B590u;
    SET_GPR_U32(ctx, 31, 0x25B598u);
    ctx->pc = 0x25B594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B590u;
            // 0x25b594: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B598u; }
        if (ctx->pc != 0x25B598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B598u; }
        if (ctx->pc != 0x25B598u) { return; }
    }
    ctx->pc = 0x25B598u;
label_25b598:
    // 0x25b598: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25b598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b59c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x25b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x25b5a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b5a4: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25B5A4u;
    SET_GPR_U32(ctx, 31, 0x25B5ACu);
    ctx->pc = 0x25B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5A4u;
            // 0x25b5a8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ACu; }
        if (ctx->pc != 0x25B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ACu; }
        if (ctx->pc != 0x25B5ACu) { return; }
    }
    ctx->pc = 0x25B5ACu;
label_25b5ac:
    // 0x25b5ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25b5b0: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x25b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x25b5b4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x25b5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b5b8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x25b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b5bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25b5bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25b5c0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25B5C0u;
    SET_GPR_U32(ctx, 31, 0x25B5C8u);
    ctx->pc = 0x25B5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5C0u;
            // 0x25b5c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5C8u; }
        if (ctx->pc != 0x25B5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5C8u; }
        if (ctx->pc != 0x25B5C8u) { return; }
    }
    ctx->pc = 0x25B5C8u;
label_25b5c8:
    // 0x25b5c8: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x25b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x25b5cc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25b5d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B5D0u;
    SET_GPR_U32(ctx, 31, 0x25B5D8u);
    ctx->pc = 0x25B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5D0u;
            // 0x25b5d4: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5D8u; }
        if (ctx->pc != 0x25B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5D8u; }
        if (ctx->pc != 0x25B5D8u) { return; }
    }
    ctx->pc = 0x25B5D8u;
label_25b5d8:
    // 0x25b5d8: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x25b5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b5dc: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25b5e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5e4: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25B5E4u;
    SET_GPR_U32(ctx, 31, 0x25B5ECu);
    ctx->pc = 0x25B5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5E4u;
            // 0x25b5e8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ECu; }
        if (ctx->pc != 0x25B5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B5ECu; }
        if (ctx->pc != 0x25B5ECu) { return; }
    }
    ctx->pc = 0x25B5ECu;
label_25b5ec:
    // 0x25b5ec: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25b5f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b5f4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B5F4u;
    {
        const bool branch_taken_0x25b5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25B5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B5F4u;
            // 0x25b5f8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b5f4) {
            ctx->pc = 0x25B610u;
            goto label_25b610;
        }
    }
    ctx->pc = 0x25B5FCu;
    // 0x25b5fc: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x25b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25b600: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B600u;
    SET_GPR_U32(ctx, 31, 0x25B608u);
    ctx->pc = 0x25B604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B600u;
            // 0x25b604: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B608u; }
        if (ctx->pc != 0x25B608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B608u; }
        if (ctx->pc != 0x25B608u) { return; }
    }
    ctx->pc = 0x25B608u;
label_25b608:
    // 0x25b608: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x25B608u;
    {
        const bool branch_taken_0x25b608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B608u;
            // 0x25b60c: 0x8e030044  lw          $v1, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b608) {
            ctx->pc = 0x25B86Cu;
            goto label_25b86c;
        }
    }
    ctx->pc = 0x25B610u;
label_25b610:
    // 0x25b610: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B610u;
    SET_GPR_U32(ctx, 31, 0x25B618u);
    ctx->pc = 0x25B614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B610u;
            // 0x25b614: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B618u; }
        if (ctx->pc != 0x25B618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B618u; }
        if (ctx->pc != 0x25B618u) { return; }
    }
    ctx->pc = 0x25B618u;
label_25b618:
    // 0x25b618: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x25B618u;
    {
        const bool branch_taken_0x25b618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b618) {
            ctx->pc = 0x25B868u;
            goto label_25b868;
        }
    }
    ctx->pc = 0x25B620u;
label_25b620:
    // 0x25b620: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x25b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x25b624: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x25b624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b628: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x25B628u;
    {
        const bool branch_taken_0x25b628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B628u;
            // 0x25b62c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b628) {
            ctx->pc = 0x25B6E0u;
            goto label_25b6e0;
        }
    }
    ctx->pc = 0x25B630u;
    // 0x25b630: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B630u;
    {
        const bool branch_taken_0x25b630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B630u;
            // 0x25b634: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b630) {
            ctx->pc = 0x25B644u;
            goto label_25b644;
        }
    }
    ctx->pc = 0x25B638u;
    // 0x25b638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b63c: 0x14c20028  bne         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25B63Cu;
    {
        const bool branch_taken_0x25b63c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b63c) {
            ctx->pc = 0x25B6E0u;
            goto label_25b6e0;
        }
    }
    ctx->pc = 0x25B644u;
label_25b644:
    // 0x25b644: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x25b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25b648: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B648u;
    SET_GPR_U32(ctx, 31, 0x25B650u);
    ctx->pc = 0x25B64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B648u;
            // 0x25b64c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B650u; }
        if (ctx->pc != 0x25B650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B650u; }
        if (ctx->pc != 0x25B650u) { return; }
    }
    ctx->pc = 0x25B650u;
label_25b650:
    // 0x25b650: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x25b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25b654: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x25b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25b658: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B658u;
    SET_GPR_U32(ctx, 31, 0x25B660u);
    ctx->pc = 0x25B65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B658u;
            // 0x25b65c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B660u; }
        if (ctx->pc != 0x25B660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B660u; }
        if (ctx->pc != 0x25B660u) { return; }
    }
    ctx->pc = 0x25B660u;
label_25b660:
    // 0x25b660: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x25b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b664: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b668: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b66c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b670: 0x0  nop
    ctx->pc = 0x25b670u;
    // NOP
    // 0x25b674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b678: 0x0  nop
    ctx->pc = 0x25b678u;
    // NOP
    // 0x25b67c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B67Cu;
    {
        const bool branch_taken_0x25b67c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B67Cu;
            // 0x25b680: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b67c) {
            ctx->pc = 0x25B6A0u;
            goto label_25b6a0;
        }
    }
    ctx->pc = 0x25B684u;
    // 0x25b684: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b688: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b690: 0x0  nop
    ctx->pc = 0x25b690u;
    // NOP
    // 0x25b694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25b698: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B698u;
    {
        const bool branch_taken_0x25b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B698u;
            // 0x25b69c: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b698) {
            ctx->pc = 0x25B6D4u;
            goto label_25b6d4;
        }
    }
    ctx->pc = 0x25B6A0u;
label_25b6a0:
    // 0x25b6a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b6a8: 0x0  nop
    ctx->pc = 0x25b6a8u;
    // NOP
    // 0x25b6ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b6b0: 0x0  nop
    ctx->pc = 0x25b6b0u;
    // NOP
    // 0x25b6b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B6B4u;
    {
        const bool branch_taken_0x25b6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6B4u;
            // 0x25b6b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6b4) {
            ctx->pc = 0x25B6D8u;
            goto label_25b6d8;
        }
    }
    ctx->pc = 0x25B6BCu;
    // 0x25b6bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b6c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b6c8: 0x0  nop
    ctx->pc = 0x25b6c8u;
    // NOP
    // 0x25b6cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b6d0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x25b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_25b6d4:
    // 0x25b6d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25b6d8:
    // 0x25b6d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b6dc: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x25b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_25b6e0:
    // 0x25b6e0: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x25b6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25b6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b6e8: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25B6E8u;
    {
        const bool branch_taken_0x25b6e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x25b6e8) {
            ctx->pc = 0x25B71Cu;
            goto label_25b71c;
        }
    }
    ctx->pc = 0x25B6F0u;
    // 0x25b6f0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x25b6f4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x25b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25b6f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B6F8u;
    {
        const bool branch_taken_0x25b6f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B6F8u;
            // 0x25b6fc: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6f8) {
            ctx->pc = 0x25B708u;
            goto label_25b708;
        }
    }
    ctx->pc = 0x25B700u;
    // 0x25b700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b704: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x25b704u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_25b708:
    // 0x25b708: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25b70c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b710: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x25b710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b714: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25B714u;
    {
        const bool branch_taken_0x25b714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B714u;
            // 0x25b718: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b714) {
            ctx->pc = 0x25B73Cu;
            goto label_25b73c;
        }
    }
    ctx->pc = 0x25B71Cu;
label_25b71c:
    // 0x25b71c: 0x14c0002e  bnez        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x25B71Cu;
    {
        const bool branch_taken_0x25b71c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b71c) {
            ctx->pc = 0x25B7D8u;
            goto label_25b7d8;
        }
    }
    ctx->pc = 0x25B724u;
    // 0x25b724: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25b728: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x25b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25b72c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25b72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b730: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25B730u;
    {
        const bool branch_taken_0x25b730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b730) {
            ctx->pc = 0x25B7D8u;
            goto label_25b7d8;
        }
    }
    ctx->pc = 0x25B738u;
    // 0x25b738: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x25b738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_25b73c:
    // 0x25b73c: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x25b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25b740: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25B740u;
    SET_GPR_U32(ctx, 31, 0x25B748u);
    ctx->pc = 0x25B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B740u;
            // 0x25b744: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B748u; }
        if (ctx->pc != 0x25B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B748u; }
        if (ctx->pc != 0x25B748u) { return; }
    }
    ctx->pc = 0x25B748u;
label_25b748:
    // 0x25b748: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x25b748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x25b74c: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x25b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x25b750: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B750u;
    SET_GPR_U32(ctx, 31, 0x25B758u);
    ctx->pc = 0x25B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B750u;
            // 0x25b754: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B758u; }
        if (ctx->pc != 0x25B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B758u; }
        if (ctx->pc != 0x25B758u) { return; }
    }
    ctx->pc = 0x25B758u;
label_25b758:
    // 0x25b758: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x25b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b75c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b760: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b768: 0x0  nop
    ctx->pc = 0x25b768u;
    // NOP
    // 0x25b76c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b76cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b770: 0x0  nop
    ctx->pc = 0x25b770u;
    // NOP
    // 0x25b774: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B774u;
    {
        const bool branch_taken_0x25b774 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B774u;
            // 0x25b778: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b774) {
            ctx->pc = 0x25B798u;
            goto label_25b798;
        }
    }
    ctx->pc = 0x25B77Cu;
    // 0x25b77c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b780: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b788: 0x0  nop
    ctx->pc = 0x25b788u;
    // NOP
    // 0x25b78c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25b790: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B790u;
    {
        const bool branch_taken_0x25b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B790u;
            // 0x25b794: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b790) {
            ctx->pc = 0x25B7CCu;
            goto label_25b7cc;
        }
    }
    ctx->pc = 0x25B798u;
label_25b798:
    // 0x25b798: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7a0: 0x0  nop
    ctx->pc = 0x25b7a0u;
    // NOP
    // 0x25b7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b7a8: 0x0  nop
    ctx->pc = 0x25b7a8u;
    // NOP
    // 0x25b7ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B7ACu;
    {
        const bool branch_taken_0x25b7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7ACu;
            // 0x25b7b0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7ac) {
            ctx->pc = 0x25B7D0u;
            goto label_25b7d0;
        }
    }
    ctx->pc = 0x25B7B4u;
    // 0x25b7b4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b7b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7c0: 0x0  nop
    ctx->pc = 0x25b7c0u;
    // NOP
    // 0x25b7c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b7c8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x25b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_25b7cc:
    // 0x25b7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25b7d0:
    // 0x25b7d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b7d4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x25b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_25b7d8:
    // 0x25b7d8: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x25B7D8u;
    {
        const bool branch_taken_0x25b7d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7D8u;
            // 0x25b7dc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b7d8) {
            ctx->pc = 0x25B868u;
            goto label_25b868;
        }
    }
    ctx->pc = 0x25B7E0u;
    // 0x25b7e0: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x25b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x25b7e4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25B7E4u;
    SET_GPR_U32(ctx, 31, 0x25B7ECu);
    ctx->pc = 0x25B7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B7E4u;
            // 0x25b7e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7ECu; }
        if (ctx->pc != 0x25B7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B7ECu; }
        if (ctx->pc != 0x25B7ECu) { return; }
    }
    ctx->pc = 0x25B7ECu;
label_25b7ec:
    // 0x25b7ec: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x25b7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b7f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b7f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b7fc: 0x0  nop
    ctx->pc = 0x25b7fcu;
    // NOP
    // 0x25b800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b804: 0x0  nop
    ctx->pc = 0x25b804u;
    // NOP
    // 0x25b808: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B808u;
    {
        const bool branch_taken_0x25b808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B808u;
            // 0x25b80c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b808) {
            ctx->pc = 0x25B82Cu;
            goto label_25b82c;
        }
    }
    ctx->pc = 0x25B810u;
    // 0x25b810: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b814: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b81c: 0x0  nop
    ctx->pc = 0x25b81cu;
    // NOP
    // 0x25b820: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25b820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25b824: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25B824u;
    {
        const bool branch_taken_0x25b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B824u;
            // 0x25b828: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b824) {
            ctx->pc = 0x25B860u;
            goto label_25b860;
        }
    }
    ctx->pc = 0x25B82Cu;
label_25b82c:
    // 0x25b82c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b834: 0x0  nop
    ctx->pc = 0x25b834u;
    // NOP
    // 0x25b838: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25b838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b83c: 0x0  nop
    ctx->pc = 0x25b83cu;
    // NOP
    // 0x25b840: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25B840u;
    {
        const bool branch_taken_0x25b840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B840u;
            // 0x25b844: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b840) {
            ctx->pc = 0x25B864u;
            goto label_25b864;
        }
    }
    ctx->pc = 0x25B848u;
    // 0x25b848: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b84c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b854: 0x0  nop
    ctx->pc = 0x25b854u;
    // NOP
    // 0x25b858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25b858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25b85c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x25b85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_25b860:
    // 0x25b860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25b864:
    // 0x25b864: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x25b864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_25b868:
    // 0x25b868: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x25b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_25b86c:
    // 0x25b86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b870: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b874: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x25b874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_25b878:
    // 0x25b878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b87c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b884: 0x3e00008  jr          $ra
    ctx->pc = 0x25B884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B884u;
            // 0x25b888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B88Cu;
}
