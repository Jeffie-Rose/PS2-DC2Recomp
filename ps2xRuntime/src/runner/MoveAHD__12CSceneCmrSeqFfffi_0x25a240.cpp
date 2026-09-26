#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveAHD__12CSceneCmrSeqFfffi
// Address: 0x25a240 - 0x25a2a4
void MoveAHD__12CSceneCmrSeqFfffi_0x25a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveAHD__12CSceneCmrSeqFfffi_0x25a240");
#endif

    switch (ctx->pc) {
        case 0x25a26cu: goto label_25a26c;
        default: break;
    }

    ctx->pc = 0x25a240u;

    // 0x25a240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a24c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x25a24cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25a250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a254: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25a254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25a258: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a25c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x25a25cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x25a260: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x25a260u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x25a264: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A264u;
    SET_GPR_U32(ctx, 31, 0x25A26Cu);
    ctx->pc = 0x25A268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A264u;
            // 0x25a268: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A26Cu; }
        if (ctx->pc != 0x25A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A26Cu; }
        if (ctx->pc != 0x25A26Cu) { return; }
    }
    ctx->pc = 0x25A26Cu;
label_25a26c:
    // 0x25a26c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A26Cu;
    {
        const bool branch_taken_0x25a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A26Cu;
            // 0x25a270: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a26c) {
            ctx->pc = 0x25A288u;
            goto label_25a288;
        }
    }
    ctx->pc = 0x25A274u;
    // 0x25a274: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a278: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x25a278u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x25a27c: 0xe4550014  swc1        $f21, 0x14($v0)
    ctx->pc = 0x25a27cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x25a280: 0xe4540018  swc1        $f20, 0x18($v0)
    ctx->pc = 0x25a280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x25a284: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_25a288:
    // 0x25a288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a28c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x25a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25a290: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a294: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25a298: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a29c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A29Cu;
            // 0x25a2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A2A4u;
}
