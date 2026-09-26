#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetIMGVersion__FPc
// Address: 0x12e000 - 0x12e0dc
void GetIMGVersion__FPc_0x12e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetIMGVersion__FPc_0x12e000");
#endif

    switch (ctx->pc) {
        case 0x12e038u: goto label_12e038;
        case 0x12e064u: goto label_12e064;
        case 0x12e090u: goto label_12e090;
        case 0x12e0bcu: goto label_12e0bc;
        default: break;
    }

    ctx->pc = 0x12e000u;

    // 0x12e000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e010: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E010u;
    {
        const bool branch_taken_0x12e010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e010) {
            ctx->pc = 0x12E024u;
            goto label_12e024;
        }
    }
    ctx->pc = 0x12E018u;
    // 0x12e018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e01c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12E01Cu;
    {
        const bool branch_taken_0x12e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e01c) {
            ctx->pc = 0x12E0C8u;
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E024u;
label_12e024:
    // 0x12e024: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12e024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12e028: 0x24a524f8  addiu       $a1, $a1, 0x24F8
    ctx->pc = 0x12e028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9464));
    // 0x12e02c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e030: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12E030u;
    SET_GPR_U32(ctx, 31, 0x12E038u);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E038u; }
        if (ctx->pc != 0x12E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E038u; }
        if (ctx->pc != 0x12E038u) { return; }
    }
    ctx->pc = 0x12E038u;
label_12e038:
    // 0x12e038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E038u;
    {
        const bool branch_taken_0x12e038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e038) {
            ctx->pc = 0x12E04Cu;
            goto label_12e04c;
        }
    }
    ctx->pc = 0x12E040u;
    // 0x12e040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e044: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x12E044u;
    {
        const bool branch_taken_0x12e044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e044) {
            ctx->pc = 0x12E0C8u;
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E04Cu;
label_12e04c:
    // 0x12e04c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12e050: 0x24a52528  addiu       $a1, $a1, 0x2528
    ctx->pc = 0x12e050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9512));
    // 0x12e054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e058: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x12e058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e05c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12E05Cu;
    SET_GPR_U32(ctx, 31, 0x12E064u);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E064u; }
        if (ctx->pc != 0x12E064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E064u; }
        if (ctx->pc != 0x12E064u) { return; }
    }
    ctx->pc = 0x12E064u;
label_12e064:
    // 0x12e064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E064u;
    {
        const bool branch_taken_0x12e064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e064) {
            ctx->pc = 0x12E078u;
            goto label_12e078;
        }
    }
    ctx->pc = 0x12E06Cu;
    // 0x12e06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e070: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12E070u;
    {
        const bool branch_taken_0x12e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e070) {
            ctx->pc = 0x12E0C8u;
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E078u;
label_12e078:
    // 0x12e078: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12e07c: 0x24a52500  addiu       $a1, $a1, 0x2500
    ctx->pc = 0x12e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9472));
    // 0x12e080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e084: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x12e084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e088: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12E088u;
    SET_GPR_U32(ctx, 31, 0x12E090u);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E090u; }
        if (ctx->pc != 0x12E090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E090u; }
        if (ctx->pc != 0x12E090u) { return; }
    }
    ctx->pc = 0x12E090u;
label_12e090:
    // 0x12e090: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E090u;
    {
        const bool branch_taken_0x12e090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e090) {
            ctx->pc = 0x12E0A4u;
            goto label_12e0a4;
        }
    }
    ctx->pc = 0x12E098u;
    // 0x12e098: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e09c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12E09Cu;
    {
        const bool branch_taken_0x12e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e09c) {
            ctx->pc = 0x12E0C8u;
            goto label_12e0c8;
        }
    }
    ctx->pc = 0x12E0A4u;
label_12e0a4:
    // 0x12e0a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12e0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12e0a8: 0x24a52508  addiu       $a1, $a1, 0x2508
    ctx->pc = 0x12e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9480));
    // 0x12e0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x12e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e0b4: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12E0B4u;
    SET_GPR_U32(ctx, 31, 0x12E0BCu);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0BCu; }
        if (ctx->pc != 0x12E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E0BCu; }
        if (ctx->pc != 0x12E0BCu) { return; }
    }
    ctx->pc = 0x12E0BCu;
label_12e0bc:
    // 0x12e0bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e0c0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x12e0c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x12e0c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12e0c8:
    // 0x12e0c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e0d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E0DCu;
}
