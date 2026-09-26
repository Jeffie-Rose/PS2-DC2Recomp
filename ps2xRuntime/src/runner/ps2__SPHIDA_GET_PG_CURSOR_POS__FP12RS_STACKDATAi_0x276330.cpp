#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_GET_PG_CURSOR_POS__FP12RS_STACKDATAi
// Address: 0x276330 - 0x27639c
void ps2__SPHIDA_GET_PG_CURSOR_POS__FP12RS_STACKDATAi_0x276330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_GET_PG_CURSOR_POS__FP12RS_STACKDATAi_0x276330");
#endif

    switch (ctx->pc) {
        case 0x276380u: goto label_276380;
        case 0x27638cu: goto label_27638c;
        default: break;
    }

    ctx->pc = 0x276330u;

    // 0x276330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276338: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x276338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x27633c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27633Cu;
    {
        const bool branch_taken_0x27633c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27633Cu;
            // 0x276340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27633c) {
            ctx->pc = 0x27634Cu;
            goto label_27634c;
        }
    }
    ctx->pc = 0x276344u;
    // 0x276344: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x276344u;
    {
        const bool branch_taken_0x276344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276344u;
            // 0x276348: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276344) {
            ctx->pc = 0x276394u;
            goto label_276394;
        }
    }
    ctx->pc = 0x27634Cu;
label_27634c:
    // 0x27634c: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x27634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x276350: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x276350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
    // 0x276354: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x276354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276358: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x276358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27635c: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x27635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x276360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x276360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276364: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x276364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x276368: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x276368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x27636c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x27636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x276370: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x276370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x276374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x276374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x276378: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276378u;
    SET_GPR_U32(ctx, 31, 0x276380u);
    ctx->pc = 0x27637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276378u;
            // 0x27637c: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276380u; }
        if (ctx->pc != 0x276380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276380u; }
        if (ctx->pc != 0x276380u) { return; }
    }
    ctx->pc = 0x276380u;
label_276380:
    // 0x276380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276384: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276384u;
    SET_GPR_U32(ctx, 31, 0x27638Cu);
    ctx->pc = 0x276388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276384u;
            // 0x276388: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27638Cu; }
        if (ctx->pc != 0x27638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27638Cu; }
        if (ctx->pc != 0x27638Cu) { return; }
    }
    ctx->pc = 0x27638Cu;
label_27638c:
    // 0x27638c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_276394:
    // 0x276394: 0x3e00008  jr          $ra
    ctx->pc = 0x276394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276394u;
            // 0x276398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27639Cu;
}
