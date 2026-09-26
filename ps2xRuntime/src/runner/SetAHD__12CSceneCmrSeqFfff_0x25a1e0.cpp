#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAHD__12CSceneCmrSeqFfff
// Address: 0x25a1e0 - 0x25a234
void SetAHD__12CSceneCmrSeqFfff_0x25a1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAHD__12CSceneCmrSeqFfff_0x25a1e0");
#endif

    switch (ctx->pc) {
        case 0x25a204u: goto label_25a204;
        default: break;
    }

    ctx->pc = 0x25a1e0u;

    // 0x25a1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a1e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a1e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a1ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a1ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a1f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a1f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a1f4: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25a1f4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25a1f8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a1f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25a1fc: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A1FCu;
    SET_GPR_U32(ctx, 31, 0x25A204u);
    ctx->pc = 0x25A200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A1FCu;
            // 0x25a200: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A204u; }
        if (ctx->pc != 0x25A204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A204u; }
        if (ctx->pc != 0x25A204u) { return; }
    }
    ctx->pc = 0x25A204u;
label_25a204:
    // 0x25a204: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A204u;
    {
        const bool branch_taken_0x25a204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A204u;
            // 0x25a208: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a204) {
            ctx->pc = 0x25A21Cu;
            goto label_25a21c;
        }
    }
    ctx->pc = 0x25A20Cu;
    // 0x25a20c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a210: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x25a210u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a214: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x25a214u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25a218: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x25a218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_25a21c:
    // 0x25a21c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a220: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a224: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a228: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a22c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A22Cu;
            // 0x25a230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A234u;
}
