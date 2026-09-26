#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetParam__11CWaterFrameFffff
// Address: 0x185bc0 - 0x185c2c
void SetParam__11CWaterFrameFffff_0x185bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParam__11CWaterFrameFffff_0x185bc0");
#endif

    switch (ctx->pc) {
        case 0x185bc0u: goto label_185bc0;
        case 0x185bc4u: goto label_185bc4;
        case 0x185bc8u: goto label_185bc8;
        case 0x185bccu: goto label_185bcc;
        case 0x185bd0u: goto label_185bd0;
        case 0x185bd4u: goto label_185bd4;
        case 0x185bd8u: goto label_185bd8;
        case 0x185bdcu: goto label_185bdc;
        case 0x185be0u: goto label_185be0;
        case 0x185be4u: goto label_185be4;
        case 0x185be8u: goto label_185be8;
        case 0x185becu: goto label_185bec;
        case 0x185bf0u: goto label_185bf0;
        case 0x185bf4u: goto label_185bf4;
        case 0x185bf8u: goto label_185bf8;
        case 0x185bfcu: goto label_185bfc;
        case 0x185c00u: goto label_185c00;
        case 0x185c04u: goto label_185c04;
        case 0x185c08u: goto label_185c08;
        case 0x185c0cu: goto label_185c0c;
        case 0x185c10u: goto label_185c10;
        case 0x185c14u: goto label_185c14;
        case 0x185c18u: goto label_185c18;
        case 0x185c1cu: goto label_185c1c;
        case 0x185c20u: goto label_185c20;
        case 0x185c24u: goto label_185c24;
        case 0x185c28u: goto label_185c28;
        default: break;
    }

    ctx->pc = 0x185bc0u;

label_185bc0:
    // 0x185bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x185bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_185bc4:
    // 0x185bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_185bc8:
    // 0x185bc8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x185bc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_185bcc:
    // 0x185bcc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x185bccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_185bd0:
    // 0x185bd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x185bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_185bd4:
    // 0x185bd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x185bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_185bd8:
    // 0x185bd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185bdc:
    // 0x185bdc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x185bdcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_185be0:
    // 0x185be0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x185be0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_185be4:
    // 0x185be4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x185be4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_185be8:
    // 0x185be8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185bec:
    // 0x185bec: 0x320f809  jalr        $t9
label_185bf0:
    if (ctx->pc == 0x185BF0u) {
        ctx->pc = 0x185BF0u;
            // 0x185bf0: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x185BF4u;
        goto label_185bf4;
    }
    ctx->pc = 0x185BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185BF4u);
        ctx->pc = 0x185BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BECu;
            // 0x185bf0: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185BF4u; }
            if (ctx->pc != 0x185BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x185BF4u;
label_185bf4:
    // 0x185bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185bf8:
    // 0x185bf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_185bfc:
    if (ctx->pc == 0x185BFCu) {
        ctx->pc = 0x185BFCu;
            // 0x185bfc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x185C00u;
        goto label_185c00;
    }
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185BF8u;
            // 0x185bfc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x185C10u;
            goto label_185c10;
        }
    }
    ctx->pc = 0x185C00u;
label_185c00:
    // 0x185c00: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x185c00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_185c04:
    // 0x185c04: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x185c04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_185c08:
    // 0x185c08: 0xc061318  jal         func_184C60
label_185c0c:
    if (ctx->pc == 0x185C0Cu) {
        ctx->pc = 0x185C0Cu;
            // 0x185c0c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x185C10u;
        goto label_185c10;
    }
    ctx->pc = 0x185C08u;
    SET_GPR_U32(ctx, 31, 0x185C10u);
    ctx->pc = 0x185C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185C08u;
            // 0x185c0c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184C60u;
    if (runtime->hasFunction(0x184C60u)) {
        auto targetFn = runtime->lookupFunction(0x184C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C10u; }
        if (ctx->pc != 0x185C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParam__6CWaterFffff_0x184c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185C10u; }
        if (ctx->pc != 0x185C10u) { return; }
    }
    ctx->pc = 0x185C10u;
label_185c10:
    // 0x185c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185c14:
    // 0x185c14: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x185c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_185c18:
    // 0x185c18: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x185c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_185c1c:
    // 0x185c1c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x185c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_185c20:
    // 0x185c20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_185c24:
    // 0x185c24: 0x3e00008  jr          $ra
label_185c28:
    if (ctx->pc == 0x185C28u) {
        ctx->pc = 0x185C28u;
            // 0x185c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x185C2Cu;
        goto label_fallthrough_0x185c24;
    }
    ctx->pc = 0x185C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185C24u;
            // 0x185c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185c24:
    ctx->pc = 0x185C2Cu;
}
