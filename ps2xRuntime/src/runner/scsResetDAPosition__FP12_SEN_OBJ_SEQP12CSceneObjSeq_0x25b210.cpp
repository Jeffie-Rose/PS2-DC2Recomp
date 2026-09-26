#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsResetDAPosition__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b210 - 0x25b28c
void scsResetDAPosition__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsResetDAPosition__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b210");
#endif

    switch (ctx->pc) {
        case 0x25b23cu: goto label_25b23c;
        case 0x25b258u: goto label_25b258;
        case 0x25b268u: goto label_25b268;
        case 0x25b278u: goto label_25b278;
        default: break;
    }

    ctx->pc = 0x25b210u;

    // 0x25b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b214: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25b214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25b218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b220: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25b220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b224: 0x8ca50064  lw          $a1, 0x64($a1)
    ctx->pc = 0x25b224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x25b228: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x25b228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b22c: 0xc60d0074  lwc1        $f13, 0x74($s0)
    ctx->pc = 0x25b22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b230: 0xc60e0078  lwc1        $f14, 0x78($s0)
    ctx->pc = 0x25b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25b234: 0xc0976e0  jal         func_25DB80
    ctx->pc = 0x25B234u;
    SET_GPR_U32(ctx, 31, 0x25B23Cu);
    ctx->pc = 0x25B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B234u;
            // 0x25b238: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB80u;
    if (runtime->hasFunction(0x25DB80u)) {
        auto targetFn = runtime->lookupFunction(0x25DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B23Cu; }
        if (ctx->pc != 0x25B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__10CEohMotherFifff_0x25db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B23Cu; }
        if (ctx->pc != 0x25B23Cu) { return; }
    }
    ctx->pc = 0x25B23Cu;
label_25b23c:
    // 0x25b23c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25b240: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x25b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b244: 0xc60d0084  lwc1        $f13, 0x84($s0)
    ctx->pc = 0x25b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b248: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25b248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25b24c: 0xc60e0088  lwc1        $f14, 0x88($s0)
    ctx->pc = 0x25b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x25b250: 0xc097780  jal         func_25DE00
    ctx->pc = 0x25B250u;
    SET_GPR_U32(ctx, 31, 0x25B258u);
    ctx->pc = 0x25B254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B250u;
            // 0x25b254: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DE00u;
    if (runtime->hasFunction(0x25DE00u)) {
        auto targetFn = runtime->lookupFunction(0x25DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B258u; }
        if (ctx->pc != 0x25B258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRot__10CEohMotherFifff_0x25de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B258u; }
        if (ctx->pc != 0x25B258u) { return; }
    }
    ctx->pc = 0x25B258u;
label_25b258:
    // 0x25b258: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25b258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25b25c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25b260: 0xc097da0  jal         func_25F680
    ctx->pc = 0x25B260u;
    SET_GPR_U32(ctx, 31, 0x25B268u);
    ctx->pc = 0x25B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B260u;
            // 0x25b264: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F680u;
    if (runtime->hasFunction(0x25F680u)) {
        auto targetFn = runtime->lookupFunction(0x25F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B268u; }
        if (ctx->pc != 0x25B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__10CEohMotherFi_0x25f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B268u; }
        if (ctx->pc != 0x25B268u) { return; }
    }
    ctx->pc = 0x25B268u;
label_25b268:
    // 0x25b268: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25b268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25b26c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25b270: 0xc097d64  jal         func_25F590
    ctx->pc = 0x25B270u;
    SET_GPR_U32(ctx, 31, 0x25B278u);
    ctx->pc = 0x25B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B270u;
            // 0x25b274: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F590u;
    if (runtime->hasFunction(0x25F590u)) {
        auto targetFn = runtime->lookupFunction(0x25F590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B278u; }
        if (ctx->pc != 0x25B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__10CEohMotherFi_0x25f590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B278u; }
        if (ctx->pc != 0x25B278u) { return; }
    }
    ctx->pc = 0x25B278u;
label_25b278:
    // 0x25b278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b27c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b284: 0x3e00008  jr          $ra
    ctx->pc = 0x25B284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B284u;
            // 0x25b288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B28Cu;
}
