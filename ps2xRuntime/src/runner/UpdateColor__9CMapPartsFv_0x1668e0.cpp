#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateColor__9CMapPartsFv
// Address: 0x1668e0 - 0x1669f4
void UpdateColor__9CMapPartsFv_0x1668e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateColor__9CMapPartsFv_0x1668e0");
#endif

    switch (ctx->pc) {
        case 0x166918u: goto label_166918;
        case 0x16693cu: goto label_16693c;
        case 0x166954u: goto label_166954;
        case 0x166964u: goto label_166964;
        case 0x16698cu: goto label_16698c;
        default: break;
    }

    ctx->pc = 0x1668e0u;

    // 0x1668e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1668e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1668e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1668e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1668e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1668ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1668ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1668f0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1668f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1668f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1668f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1668f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1668fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1668fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166900: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x166904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16690c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166910: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x166910u;
    {
        const bool branch_taken_0x166910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166910u;
            // 0x166914: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166910) {
            ctx->pc = 0x1669B8u;
            goto label_1669b8;
        }
    }
    ctx->pc = 0x166918u;
label_166918:
    // 0x166918: 0xc6c101fc  lwc1        $f1, 0x1FC($s6)
    ctx->pc = 0x166918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16691c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16691cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166920: 0x0  nop
    ctx->pc = 0x166920u;
    // NOP
    // 0x166924: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x166924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166928: 0x0  nop
    ctx->pc = 0x166928u;
    // NOP
    // 0x16692c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x16692Cu;
    {
        const bool branch_taken_0x16692c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16692Cu;
            // 0x166930: 0x8ef100b0  lw          $s1, 0xB0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16692c) {
            ctx->pc = 0x1669ACu;
            goto label_1669ac;
        }
    }
    ctx->pc = 0x166934u;
    // 0x166934: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x166934u;
    {
        const bool branch_taken_0x166934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x166934) {
            ctx->pc = 0x1669ACu;
            goto label_1669ac;
        }
    }
    ctx->pc = 0x16693Cu;
label_16693c:
    // 0x16693c: 0x0  nop
    ctx->pc = 0x16693cu;
    // NOP
    // 0x166940: 0x8e34009c  lw          $s4, 0x9C($s1)
    ctx->pc = 0x166940u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x166944: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x166944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x166948: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x166948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x16694c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x16694Cu;
    {
        const bool branch_taken_0x16694c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x166950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16694Cu;
            // 0x166950: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16694c) {
            ctx->pc = 0x1669A0u;
            goto label_1669a0;
        }
    }
    ctx->pc = 0x166954u;
label_166954:
    // 0x166954: 0x0  nop
    ctx->pc = 0x166954u;
    // NOP
    // 0x166958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16695c: 0xc05a18c  jal         func_168630
    ctx->pc = 0x16695Cu;
    SET_GPR_U32(ctx, 31, 0x166964u);
    ctx->pc = 0x166960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16695Cu;
            // 0x166960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168630u;
    if (runtime->hasFunction(0x168630u)) {
        auto targetFn = runtime->lookupFunction(0x168630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166964u; }
        if (ctx->pc != 0x166964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaterial__9CMapPieceFi_0x168630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166964u; }
        if (ctx->pc != 0x166964u) { return; }
    }
    ctx->pc = 0x166964u;
label_166964:
    // 0x166964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x166964u;
    {
        const bool branch_taken_0x166964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166964) {
            ctx->pc = 0x16698Cu;
            goto label_16698c;
        }
    }
    ctx->pc = 0x16696Cu;
    // 0x16696c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x166970: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x166970u;
    {
        const bool branch_taken_0x166970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166970) {
            ctx->pc = 0x16698Cu;
            goto label_16698c;
        }
    }
    ctx->pc = 0x166978u;
    // 0x166978: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x166978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16697c: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16697Cu;
    {
        const bool branch_taken_0x16697c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x166980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16697Cu;
            // 0x166980: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16697c) {
            ctx->pc = 0x16698Cu;
            goto label_16698c;
        }
    }
    ctx->pc = 0x166984u;
    // 0x166984: 0xc041e82  jal         func_107A08
    ctx->pc = 0x166984u;
    SET_GPR_U32(ctx, 31, 0x16698Cu);
    ctx->pc = 0x166988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166984u;
            // 0x166988: 0x26c501f0  addiu       $a1, $s6, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16698Cu; }
        if (ctx->pc != 0x16698Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16698Cu; }
        if (ctx->pc != 0x16698Cu) { return; }
    }
    ctx->pc = 0x16698Cu;
label_16698c:
    // 0x16698c: 0x0  nop
    ctx->pc = 0x16698cu;
    // NOP
    // 0x166990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166994: 0x254182a  slt         $v1, $s2, $s4
    ctx->pc = 0x166994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x166998: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x166998u;
    {
        const bool branch_taken_0x166998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166998) {
            ctx->pc = 0x166954u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166954;
        }
    }
    ctx->pc = 0x1669A0u;
label_1669a0:
    // 0x1669a0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1669a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1669a4: 0x1620ffe5  bnez        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1669A4u;
    {
        const bool branch_taken_0x1669a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1669a4) {
            ctx->pc = 0x16693Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16693c;
        }
    }
    ctx->pc = 0x1669ACu;
label_1669ac:
    // 0x1669ac: 0x0  nop
    ctx->pc = 0x1669acu;
    // NOP
    // 0x1669b0: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1669b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1669b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1669b8:
    // 0x1669b8: 0x8ee301e8  lw          $v1, 0x1E8($s7)
    ctx->pc = 0x1669b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 488)));
    // 0x1669bc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1669bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1669c0: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1669C0u;
    {
        const bool branch_taken_0x1669c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1669C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669C0u;
            // 0x1669c4: 0x2f5b021  addu        $s6, $s7, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1669c0) {
            ctx->pc = 0x166918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166918;
        }
    }
    ctx->pc = 0x1669C8u;
    // 0x1669c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1669c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1669cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1669ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1669d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1669d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1669d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1669d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1669d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1669d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1669dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1669dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1669e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1669e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1669e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1669e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1669e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1669e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1669ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1669ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1669F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669ECu;
            // 0x1669f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1669F4u;
}
