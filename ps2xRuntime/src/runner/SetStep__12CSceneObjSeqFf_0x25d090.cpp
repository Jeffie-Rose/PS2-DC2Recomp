#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStep__12CSceneObjSeqFf
// Address: 0x25d090 - 0x25d0c4
void SetStep__12CSceneObjSeqFf_0x25d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStep__12CSceneObjSeqFf_0x25d090");
#endif

    switch (ctx->pc) {
        case 0x25d0a4u: goto label_25d0a4;
        default: break;
    }

    ctx->pc = 0x25d090u;

    // 0x25d090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d098: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25d098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d09c: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25D09Cu;
    SET_GPR_U32(ctx, 31, 0x25D0A4u);
    ctx->pc = 0x25D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D09Cu;
            // 0x25d0a0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D0A4u; }
        if (ctx->pc != 0x25D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D0A4u; }
        if (ctx->pc != 0x25D0A4u) { return; }
    }
    ctx->pc = 0x25D0A4u;
label_25d0a4:
    // 0x25d0a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D0A4u;
    {
        const bool branch_taken_0x25d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D0A4u;
            // 0x25d0a8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0a4) {
            ctx->pc = 0x25D0B4u;
            goto label_25d0b4;
        }
    }
    ctx->pc = 0x25D0ACu;
    // 0x25d0ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d0b0: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x25d0b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_25d0b4:
    // 0x25d0b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d0b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D0BCu;
            // 0x25d0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D0C4u;
}
