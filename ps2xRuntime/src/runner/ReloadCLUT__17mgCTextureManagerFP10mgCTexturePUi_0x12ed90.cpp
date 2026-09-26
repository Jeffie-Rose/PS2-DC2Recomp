#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReloadCLUT__17mgCTextureManagerFP10mgCTexturePUi
// Address: 0x12ed90 - 0x12ee98
void ReloadCLUT__17mgCTextureManagerFP10mgCTexturePUi_0x12ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadCLUT__17mgCTextureManagerFP10mgCTexturePUi_0x12ed90");
#endif

    switch (ctx->pc) {
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee88u: goto label_12ee88;
        default: break;
    }

    ctx->pc = 0x12ed90u;

    // 0x12ed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ed94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12ed98: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ED98u;
    {
        const bool branch_taken_0x12ed98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ed98) {
            ctx->pc = 0x12EDACu;
            goto label_12edac;
        }
    }
    ctx->pc = 0x12EDA0u;
    // 0x12eda0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12eda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eda4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x12EDA4u;
    {
        const bool branch_taken_0x12eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eda4) {
            ctx->pc = 0x12EE88u;
            goto label_12ee88;
        }
    }
    ctx->pc = 0x12EDACu;
label_12edac:
    // 0x12edac: 0x8ca80060  lw          $t0, 0x60($a1)
    ctx->pc = 0x12edacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x12edb0: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EDB0u;
    {
        const bool branch_taken_0x12edb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x12edb0) {
            ctx->pc = 0x12EDC4u;
            goto label_12edc4;
        }
    }
    ctx->pc = 0x12EDB8u;
    // 0x12edb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12edb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edbc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x12EDBCu;
    {
        const bool branch_taken_0x12edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12edbc) {
            ctx->pc = 0x12EE88u;
            goto label_12ee88;
        }
    }
    ctx->pc = 0x12EDC4u;
label_12edc4:
    // 0x12edc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12edc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edc8: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x12edc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x12edcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x12edccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12edd0: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EDD0u;
    {
        const bool branch_taken_0x12edd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12edd0) {
            ctx->pc = 0x12EE30u;
            goto label_12ee30;
        }
    }
    ctx->pc = 0x12EDD8u;
    // 0x12edd8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12eddc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x12eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x12ede0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x12ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x12ede4: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x12ede4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x12ede8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x12ede8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x12edec: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x12edecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x12edf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12edf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12edf4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12edf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12edf8: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x12edf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x12edfc: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x12edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x12ee00: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x12ee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x12ee04: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x12ee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee08: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12ee08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12ee0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee14: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12ee18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12ee18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12ee1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee20: 0xc04b980  jal         func_12E600
    ctx->pc = 0x12EE20u;
    SET_GPR_U32(ctx, 31, 0x12EE28u);
    ctx->pc = 0x12E600u;
    if (runtime->hasFunction(0x12E600u)) {
        auto targetFn = runtime->lookupFunction(0x12E600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE28u; }
        if (ctx->pc != 0x12EE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadImage__FPUiiiiP1iiiii_0x12e600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE28u; }
        if (ctx->pc != 0x12EE28u) { return; }
    }
    ctx->pc = 0x12EE28u;
label_12ee28:
    // 0x12ee28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12EE28u;
    {
        const bool branch_taken_0x12ee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ee28) {
            ctx->pc = 0x12EE88u;
            goto label_12ee88;
        }
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x12ee30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12ee34: 0x14890014  bne         $a0, $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12EE34u;
    {
        const bool branch_taken_0x12ee34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x12ee34) {
            ctx->pc = 0x12EE88u;
            goto label_12ee88;
        }
    }
    ctx->pc = 0x12EE3Cu;
    // 0x12ee3c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x12ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x12ee40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ee44: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x12ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x12ee48: 0xdca20038  ld          $v0, 0x38($a1)
    ctx->pc = 0x12ee48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x12ee4c: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x12ee50: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x12ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x12ee54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ee58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x12ee58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12ee5c: 0x90a2003e  lbu         $v0, 0x3E($a1)
    ctx->pc = 0x12ee5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x12ee60: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x12ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x12ee64: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x12ee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x12ee68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x12ee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12ee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12ee70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ee74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12ee78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12ee7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ee80: 0xc04b980  jal         func_12E600
    ctx->pc = 0x12EE80u;
    SET_GPR_U32(ctx, 31, 0x12EE88u);
    ctx->pc = 0x12E600u;
    if (runtime->hasFunction(0x12E600u)) {
        auto targetFn = runtime->lookupFunction(0x12E600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE88u; }
        if (ctx->pc != 0x12EE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadImage__FPUiiiiP1iiiii_0x12e600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EE88u; }
        if (ctx->pc != 0x12EE88u) { return; }
    }
    ctx->pc = 0x12EE88u;
label_12ee88:
    // 0x12ee88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12ee88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ee8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ee90: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EE98u;
}
