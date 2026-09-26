#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BindStep__8CFishObjFv
// Address: 0x313310 - 0x313380
void BindStep__8CFishObjFv_0x313310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BindStep__8CFishObjFv_0x313310");
#endif

    switch (ctx->pc) {
        case 0x313334u: goto label_313334;
        case 0x31334cu: goto label_31334c;
        default: break;
    }

    ctx->pc = 0x313310u;

    // 0x313310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x313314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x313314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x313318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x313318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31331c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x313324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x313328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x313328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31332c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31332Cu;
    {
        const bool branch_taken_0x31332c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31332Cu;
            // 0x313330: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31332c) {
            ctx->pc = 0x313354u;
            goto label_313354;
        }
    }
    ctx->pc = 0x313334u;
label_313334:
    // 0x313334: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x313334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x313338: 0xc44c01a0  lwc1        $f12, 0x1A0($v0)
    ctx->pc = 0x313338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31333c: 0x8c450198  lw          $a1, 0x198($v0)
    ctx->pc = 0x31333cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x313340: 0xc44d019c  lwc1        $f13, 0x19C($v0)
    ctx->pc = 0x313340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x313344: 0xc0c4880  jal         func_312200
    ctx->pc = 0x313344u;
    SET_GPR_U32(ctx, 31, 0x31334Cu);
    ctx->pc = 0x313348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313344u;
            // 0x313348: 0x8c440194  lw          $a0, 0x194($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312200u;
    if (runtime->hasFunction(0x312200u)) {
        auto targetFn = runtime->lookupFunction(0x312200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31334Cu; }
        if (ctx->pc != 0x31334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BindPosition__FPfPfff_0x312200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31334Cu; }
        if (ctx->pc != 0x31334Cu) { return; }
    }
    ctx->pc = 0x31334Cu;
label_31334c:
    // 0x31334c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x31334cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x313350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x313350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_313354:
    // 0x313354: 0x0  nop
    ctx->pc = 0x313354u;
    // NOP
    // 0x313358: 0x8e430190  lw          $v1, 0x190($s2)
    ctx->pc = 0x313358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x31335c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x31335cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x313360: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x313360u;
    {
        const bool branch_taken_0x313360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x313360) {
            ctx->pc = 0x313334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_313334;
        }
    }
    ctx->pc = 0x313368u;
    // 0x313368: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x313368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31336c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31336cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313378: 0x3e00008  jr          $ra
    ctx->pc = 0x313378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313378u;
            // 0x31337c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x313380u;
}
