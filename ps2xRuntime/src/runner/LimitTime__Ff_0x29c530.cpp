#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LimitTime__Ff
// Address: 0x29c530 - 0x29c5e8
void LimitTime__Ff_0x29c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LimitTime__Ff_0x29c530");
#endif

    switch (ctx->pc) {
        case 0x29c598u: goto label_29c598;
        default: break;
    }

    ctx->pc = 0x29c530u;

    // 0x29c530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29c538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c53c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x29c53cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29c540: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29c540u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29c544: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29c544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c548: 0x0  nop
    ctx->pc = 0x29c548u;
    // NOP
    // 0x29c54c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x29C54Cu;
    {
        const bool branch_taken_0x29c54c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C54Cu;
            // 0x29c550: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c54c) {
            ctx->pc = 0x29C57Cu;
            goto label_29c57c;
        }
    }
    ctx->pc = 0x29C554u;
    // 0x29c554: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x29c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x29c558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c55c: 0x0  nop
    ctx->pc = 0x29c55cu;
    // NOP
    // 0x29c560: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29c560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c564: 0x0  nop
    ctx->pc = 0x29c564u;
    // NOP
    // 0x29c568: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C568u;
    {
        const bool branch_taken_0x29c568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C568u;
            // 0x29c56c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c568) {
            ctx->pc = 0x29C578u;
            goto label_29c578;
        }
    }
    ctx->pc = 0x29C570u;
    // 0x29c570: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29C570u;
    {
        const bool branch_taken_0x29c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C570u;
            // 0x29c574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c570) {
            ctx->pc = 0x29C5DCu;
            goto label_29c5dc;
        }
    }
    ctx->pc = 0x29C578u;
label_29c578:
    // 0x29c578: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x29c578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_29c57c:
    // 0x29c57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c580: 0x0  nop
    ctx->pc = 0x29c580u;
    // NOP
    // 0x29c584: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x29c584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x29c588: 0x0  nop
    ctx->pc = 0x29c588u;
    // NOP
    // 0x29c58c: 0x0  nop
    ctx->pc = 0x29c58cu;
    // NOP
    // 0x29c590: 0xc0a248c  jal         func_289230
    ctx->pc = 0x29C590u;
    SET_GPR_U32(ctx, 31, 0x29C598u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C598u; }
        if (ctx->pc != 0x29C598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C598u; }
        if (ctx->pc != 0x29C598u) { return; }
    }
    ctx->pc = 0x29C598u;
label_29c598:
    // 0x29c598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c59c: 0x0  nop
    ctx->pc = 0x29c59cu;
    // NOP
    // 0x29c5a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29c5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29c5a4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x29c5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29c5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29c5ac: 0x0  nop
    ctx->pc = 0x29c5acu;
    // NOP
    // 0x29c5b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29c5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c5b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x29c5b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x29c5b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c5b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c5bc: 0x0  nop
    ctx->pc = 0x29c5bcu;
    // NOP
    // 0x29c5c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x29c5c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c5c4: 0x0  nop
    ctx->pc = 0x29c5c4u;
    // NOP
    // 0x29c5c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C5C8u;
    {
        const bool branch_taken_0x29c5c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5C8u;
            // 0x29c5cc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5c8) {
            ctx->pc = 0x29C5D8u;
            goto label_29c5d8;
        }
    }
    ctx->pc = 0x29C5D0u;
    // 0x29c5d0: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x29c5d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x29c5d4: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x29c5d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_29c5d8:
    // 0x29c5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c5dc:
    // 0x29c5dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29c5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C5E0u;
            // 0x29c5e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C5E8u;
}
